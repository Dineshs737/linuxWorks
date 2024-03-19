#include<stdio.h>
#include"MaxNumber.h"
int main(void)
{
    int num1 , num2 , num3 ;

    printf("Enter the number :");
    scanf("%d",&num1);

    printf("Enter the number :");
    scanf("%d",&num2);

    printf("Enter the number :");
    scanf("%d",&num3);

    printf("\nMax number is :%d\n",max(num1,num2,num3));
    return 0;
}