#include <stdio.h>

int main(void){
int number;
	scanf("%d", &number);
int count = 0;
int temp = number;
while (temp != 0)
{
	count++;
	temp /= 10;
}
if (count == 3)
	{
	printf("YES\n");
}
else
{
	printf("NO\n");
}
return 0;
}
