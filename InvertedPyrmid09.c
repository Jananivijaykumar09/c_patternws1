#include<stdio.h>

int main()
{
  int i,n=5,j;
  for ( i = 0; i < n; i++)
  {
    for ( j=0;j<i+1;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  for ( i = 0; i < n; i++)
  {
    for (j = 0; j < n-i-1; j++)
    {
     printf("* ");
    }
    printf("\n");
  }
  
  
  return 0;
}