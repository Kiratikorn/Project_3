#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number:");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d is an Even number", num);
	}
	else
	{
		printf("%d is an Odd number", num);
	}
	return 0;
}