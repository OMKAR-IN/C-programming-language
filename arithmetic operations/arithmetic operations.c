#include<stdio.h>
int main()
{
    printf(":: Program written by Omkar Shinge ::\n\n");
    int num1, num2;
    printf("Enter the numbers on which you have to perform arithmetic operations : \n");
    scanf("%d%d",&num1,&num2);
    printf("Result of addition of num1 & num2 is : ");
    printf("%d\n",num1+num2);
    printf("Result of subtraction of num2 from num1 is : ");
    printf("%d\n",num1-num2);
    printf("Result of multiplication of num1 & num2 is : ");
    printf("%d\n",num1*num2);
    printf("Result of division of num1 by num2 is : ");
    printf("%d\n",num1/num2);
    return 0;
}
