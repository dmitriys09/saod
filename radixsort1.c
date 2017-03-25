#include<stdio.h>

int findLargestNum(int * array, int size){
  
  int i;
  int largestNum = -1;
  
  for(i = 0; i < size; i++){
    if(array[i] > largestNum)
      largestNum = array[i];
  }
  
  return largestNum;
}

void radixsort(int * array, int size){

  int i;
  int semiSorted[size];
  int significantDigit = 1;
  int largestNum = findLargestNum(array, size);

  while (largestNum / significantDigit > 0){

    int bucket[10] = { 0 };

    for (i = 0; i < size; i++)
    {
      bucket[(array[i] / significantDigit) % 10]++;
    }
    
    for (i = 1; i < 10; i++)
    {
      bucket[i] += bucket[i - 1];
    }

    for (i = size - 1; i >= 0; i--)
    {
      semiSorted[--bucket[(array[i] / significantDigit) % 10]] = array[i];
    }

    for (i = 0; i < size; i++)
    {
      array[i] = semiSorted[i];
    }

    significantDigit*=10;
  }
}
