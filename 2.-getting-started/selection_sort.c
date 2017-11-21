#include <stdio.h>
#include <limits.h>

int data[6] = {5, 2, 4, 6, 1, 3};
int data_len = 6;

void printArray(int *ptr, int len) {
  printf("[ ");
  for(int i = 0; i < len; i++) {
    printf("%d ", ptr[i]);
  }
  printf("]\n");
}

void selectionSort(int *ptr, int len, int inc) {
  for(int i = 0; i < len - 1; i++) {
    int next_id = i;
    for(int id = i + 1; id < len; id++) {
      if(inc && ptr[id] < ptr[next_id]) {
        next_id = id;
      } else if(!inc && ptr[id] > ptr[next_id]) {
        next_id = id;
      }
    }
    int temp = ptr[i];
    ptr[i] = ptr[next_id];
    ptr[next_id] = temp;
  }
}

int main() {
  printf("Before sorting:\t");
  printArray(data, data_len);

  printf("After sorting:\t");
  selectionSort(data, data_len, 1);
  printArray(data, data_len);

  printf("Decreasing:\t");
  selectionSort(data, data_len, 0);
  printArray(data, data_len);
}
