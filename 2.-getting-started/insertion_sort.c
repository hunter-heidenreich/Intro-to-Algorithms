#include <stdio.h>

int data[6] = {5, 2, 4, 6, 1, 3};
int data_len = 6;

void printArray(int *ptr, int len) {
  printf("[ ");
  for(int i = 0; i < len; i++) {
    printf("%d ", ptr[i]);
  }
  printf("]\n");
}

void insertionSort(int *ptr, int len) {
  for(int j = 1; j < len; j++) {
    int key = ptr[j];
    int i = j - 1;
    while(i > -1 && ptr[i] > key) {
      ptr[i + 1] = ptr[i];
      i = i - 1;
    }
    ptr[i + 1] = key;
  }
}

int main() {
  
  printf("Before sorting: \n");  
  printArray(data, data_len);

  printf("After sorting: \n");
  insertionSort(data, data_len);
  printArray(data, data_len);
  return 0;
}
