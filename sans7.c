Program 7- write a C program to swap the numbers using a temporary variable.
solution 1- user define values.

#include <stdio.h>
int main()

{
    int a,b,temp;

    a = 111;
    b = 222;
    printf("\n Before swapping:");
    printf("\n a = %d,b = %d \n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping;");
    printf("\n a = %d,b = %d \n",a,b);

    return 0;
}