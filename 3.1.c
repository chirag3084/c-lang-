/* Write a program to that performs as calculator (addition, multiplication, division, subtraction). */

#include<stdio.h>
int main() {
	int i,j,sum,diff,multi,div;
	
	printf("Enter your first number :  ");
	scanf("%d",&i);
	printf("Enter your second number : ");
	scanf("%d",&j);
	
	sum = i + j;
	diff = i - j;
	multi = i * j;
	div = i / j;
	
	printf("Addition = %d\n",sum);
	printf("Subtraction = %d\n",diff);
	printf("Multiplication = %d\n",multi);
	printf("Division = %d\n",div);
	
	return 0;
}
	
	
