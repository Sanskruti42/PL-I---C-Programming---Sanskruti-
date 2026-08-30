Program 8- writea C program to swap two numbers using a temporary variable.
solution 2- user define values.

#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("\n Enter First Number:");
    scanf("%d",&a);

    printf("\n Enter Second Number:");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping: \n");
    printf("\n First Number= %d \n", a);
    printf("\n Second Number= %d \n", b);

 return 0;
}