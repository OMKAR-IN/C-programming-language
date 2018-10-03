#include<stdio.h>
int main()
{
    printf(":: Program written by Omkar Shinge ::\n\n");
    int length, breadth;
    printf("Enter the length of rectangle :\n");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle :\n");
    scanf("%d",&breadth);
    printf("Area of the rectangle is : ");
    printf("%d\n",length*breadth);
    printf("Perimeter of the rectangle is : ");
    printf("%d\n",2*(length+breadth));
    return 0;
}
