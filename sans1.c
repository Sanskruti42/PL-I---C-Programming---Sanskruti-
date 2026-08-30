program 1-write a program to make use of basc I/O functions using diff data types
solution 1-predefined values


#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum = 101;
    per = 89.75;
    grade = 'A';

    printf ("-----student Information-----\n");
    printf ("\n Roll Number : %d", rollnum);
    printf ("\n Percentage : %f",per);
    printf ("\n Grade : %c",grade);

    return 0;