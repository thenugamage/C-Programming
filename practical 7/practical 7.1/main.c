#include<stdio.h>
int main()

{
    int num1,num2;

    printf("Enter number 1 and number 2 : ");
    scanf("%d%d",&num1,&num2);

    if (num1 % num2 == 0)
    {
        printf("The number 1 is a multiple of the number 2");

    }
    else
    {
        printf("The number 1 is not a multiple of the number 2");
    }
}