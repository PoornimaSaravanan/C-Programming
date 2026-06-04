#include <stdio.h>
int main()
{
  int a = 0, b = 1, c, i = 1;
  printf("%d %d ", a, b);
    while(i <= 8)
    {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
      i++;
    }
    return 0;
}
-------------------------------------------
Output:0 1 1 2 3 5 8 13 21 34 
