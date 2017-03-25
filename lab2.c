#include<stdio.h>
#include<stdlib.h>
#include"func.h"
#include<sys/time.h>

int main()
{

 int num, i;
 double t;

 for (num = 50000; num <= 1000000; num += 50000)
 {
    int arr[num-1];

    for(i = 0; i <= num; i++)
     {
            arr[i] = getrand(1,100000);
     }

     t = wtime();
      heapsort(arr, num);
     t= wtime() - t;

     printf("Elapsed time for %d elements: %.6f sec\n",num, t);
 }

 return 0;
}
