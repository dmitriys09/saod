#include<stdio.h>
#include<stdlib.h>
int getrand(int min, int max)
 {
    return (double)rand() / (RAND_MAX+1.0) * (max-min)+min;
 }

void swap(int a[], int j)
 {
    int t;

    t=a[j];
    a[j]=a[j-1];
    a[j-1]=t;
 }

void OddEvenSort (int a[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
         if (i & 1)
         {
             for (int j = 2 ; j < n ; j += 2)
             {
                  if (a[j] < a[j-1])
                      swap (a, j) ;
             }
          }
          else
          {
              for (int j = 1 ; j < n ; j += 2)
              {
                   if (a[j] < a[j-1])
                   {
                       swap (a, j);
                   }
              }
          }
    }
}
