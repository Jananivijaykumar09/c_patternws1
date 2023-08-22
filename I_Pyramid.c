#include <stdio.h>

int main()
{
  int i, j, s, n = 5;
  for (i = 0; i < n; i++) // Fixed the loop initialization
  {
    for (s = 0; s < i; s++)
    {
      printf(" ");
    }
    for (j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf("*");
    }
  
    printf("\n");
  }
  return 0;
}

