#include <stdio.h>

void t_area();
float para(float, float, float);
void type_of_tri(float, float, float);

int main() 
{
    float a, b, c, p;
    int ch;
    char choice;

    do {
        printf("Enter three sides of the triangle: ");
        scanf("%f %f %f", &a, &b, &c);


        if (a + b > c && b + c > a && c + a > b) 
		{
            printf("Enter choice: 1 for area / 2 for perimeter / 3 for type of triangle: ");
            scanf("%d", &ch);

            switch (ch) 
			{
                case 1:
                    t_area();
                    break;
                case 2:
                    p = para(a, b, c); 
                    printf("Perimeter of the triangle: %.2f\n", p);
                    break;
                case 3:
                    type_of_tri(a, b, c); 
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
        } 
		else 
		{
            printf("The sides entered do not form a triangle.\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice); 

    } 
	while (choice == 'y' || choice == 'Y');
    return 0; 
}

void t_area() 
{
    float ar, base, height;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    ar = (base * height) / 2;
    printf("The Area of the Triangle is %.2f\n", ar);
}

float para(float a, float b, float c) 
{
	float p;
	p=a+b+c;
    return p; 
}

void type_of_tri(float a, float b, float c) 
{
    if (a == b && b == c) 
	{
        printf("The triangle is Equilateral.\n");
    } 
	else if (a == b || b == c || c == a) 
	{
        printf("The triangle is Isosceles.\n");
    } 
	else 
	{
        printf("The triangle is Scalene.\n");
    }
}

