#include <stdio.h>
int main()
{
  int i = 1;
    while(i <= 20)
    {
      if(i % 2 != 0)
      {
        printf("%d ", i);
      }
        i++;
    }
    return 0;
}
------------------------------------
Output: 1 3 5 7 9 11 13 15 17  19
