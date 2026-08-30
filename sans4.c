Program 4- write a program to calculate the area of a circle.
solution 2- user define values

#include<stdio.h>
int main()
{
    float radius,area;

    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = (3.14*radius*radius);
    printf("\n Area of Circle = %f",area);

    return 0;
}