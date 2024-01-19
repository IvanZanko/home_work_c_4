#include <stdio.h>

int main(void)
{
int number;
	scanf("%d", &number);

int temp = number;
int digit;
while (temp != 0)
{
	digit = temp % 10;
if (digit % 2 != 0){
	printf("NO\n");
return 0;
}
	temp /= 10;
}
	printf("YES\n");
return 0;
}
