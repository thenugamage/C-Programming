#include <stdio.h>

int main()

{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num%2==0)
        printf("This number is an even number");
    else
        printf("This number is an odd number");
}
