#include <stdio.h>
int main()
{
  int n = 7, a = 0, b = 1, c, i = 1;
  while(i < n)
  {
    c = a + b;
    a = b;
    b = c;
    i++;
    }
    printf("%d", a);
    return 0;
}  
--------------------------------------------
Output: 8
