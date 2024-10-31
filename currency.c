#include <stdio.h>

void main() 
{
    int price, five_hundred, two_hundred, one_hundred, fifty, twenty, ten, five, two, one, rem;

    
    printf("Enter the currency : ");
    scanf("%d", &price);

   
    five_hundred = price / 500;
    rem = price % 500;
    printf("500 rs notes: %d\n", five_hundred);

    two_hundred = rem / 200;
    rem = rem % 200;
    printf("200 rs notes: %d\n", two_hundred);

 
    one_hundred = rem / 100;
    rem = rem % 100;
    printf("100 rs notes: %d\n", one_hundred);

    fifty = rem / 50;
    rem = rem % 50;
    printf("50 rs notes: %d\n", fifty);

    twenty = rem / 20;
    rem = rem % 20;
    printf("20 rs notes: %d\n", twenty);

   
    ten = rem / 10;
    rem = rem % 10;
    printf("10 rs notes: %d\n", ten);

    
    five = rem / 5;
    rem = rem % 5;
    printf("5 rs notes: %d\n", five);

 
    two = rem / 2;
    rem = rem % 2;
    printf("2 rs notes: %d\n", two);

 
    one = rem; 
    printf("1 rs notes: %d\n", one);
}
