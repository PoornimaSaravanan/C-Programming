#include <stdio.h>
int main()
{
  int n = 10;
  int a = 0, b = 1, c;
  int i = 1, sum = 0;
    while(i <= n)
    {
      if(a % 2 == 0)
        sum = sum + a;
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("Even Fibonacci Sum = %d", sum);
    return 0;
}
-----------------------------------------------------
Output: Even Fibonacci Serires-44
