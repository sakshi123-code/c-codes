#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter two number");
    scanf("%d",& num);
    if(num % 2 ==0)
    {
        printf("given number is even %d ", num);
    
    }
    else
    {
    printf("given number is odd %d", num);
    }
    return 0;

}