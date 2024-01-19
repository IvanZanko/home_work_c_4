#include <stdio.h>
int main(void)
{
int i, a, b;
 scanf("%d%d", &a, &b);
 int sum = 0;
 for (i=a; i<=b; i++)
 sum += i * i;
 printf("%d \t",sum);
 return 0;
}
