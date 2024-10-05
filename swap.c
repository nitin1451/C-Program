#include<stdio.h>
int main ()
{
	int a , b , temp;
	printf("Enter two number :");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("Number after swapping will be  a=%d and b=%d", a,b);
	return 0;
}
