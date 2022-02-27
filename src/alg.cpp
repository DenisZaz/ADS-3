// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0, r = size - 1, check = -1, count = 0;
  int middle;
  while (l <= r) {
    middle = l + (r - l) / 2;
    if (arr[middle] == value) {
      count++;
      check = middle;
      break;
    }
      if (value < arr[middle])
        r = middle - 1;
      else
        l = middle + 1;
  }

  if (check >= 0) {
    for (int start = 0; start < check; start++) {
      if (arr[start] == value)
        count++;
    }
    for (int end = size - 1; end > check; end--) {
      if (arr[end] == value)
        count++;
    }
  }

  if (count > 0)
    return count;
  else
    return 0;
}
