#include<stdio.h>
int main ()
{
	int fact=1 , i, num;
	printf("Enter the number :");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of given number is %d",fact);
	return 0;
}
