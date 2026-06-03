#include <stdio.h>
int main()
{
  int a = 0, b = 1, c, i = 1;
  while(i <= 10)
  {
    c = a + b;
    a = b;
    b = c;
    i++;      
  }
    printf("%d", c);
    return 0;
}
----------------------------------------
Output: 89
