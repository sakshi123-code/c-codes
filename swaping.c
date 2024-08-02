#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,temp;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    temp =num1;
    num1 =num2;
    num2 =temp;
    printf(" the first value is %d \n ",temp);
    printf("the second value is %d  \n",temp);
    return 0;
}