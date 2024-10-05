#include<stdio.h>
#include<math.h>
int main ()
{
	int princ, time , c_i,total_amount;
	float rate;
	printf("Enter principle : ");
	scanf("%d",&princ);
	printf("Enter rate of interest : ");
	scanf("%f",&rate);
	printf("Enter time of interest : ");
	scanf("%d",&time);
	c_i= princ*pow((1+(rate/100)),time)-princ;
	total_amount= princ + c_i;
	printf("The compound interest : %d\n",c_i);
	printf("Total ammount with interest will be : %d ",total_amount);
	
	return 0;
}
