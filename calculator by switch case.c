// Write a program for simple calculator using switch-case statement.

#include <stdio.h>
int main()
{
	char k;
	int i, j, t;
	printf("Enter operator(+,-,*,/) \n");

	printf("Enter a operator : ");
	scanf("%c", &k);

	printf("Enter your first number : ");
	scanf("%d", &i);

	printf("Enter your second  number : ");
	scanf("%d", &j);

	switch (k)
	{
	case '+':
		printf("The sum of those numbers is : %d", i + j);
		break;

	case '-':
		printf("The subtraction  of those numbers is : %d", i - j);
		break;

	case '*':
		printf("The multiplication   of those numbers is : %d", i * j);
		break;

	case '/':
		printf("The division   of those numbers is : %d", i / j);
		break;

	default:
		printf("Enter a proper operator");

		return 0;
	}
}
