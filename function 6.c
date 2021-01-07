//Write a function power ( a, b ), to calculate the value of a raised to b.


#include<stdio.h>
#include<conio.h>
int power(int a, int b);
int main()
{
    int a, b, res;

    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    res = power(a,b);

    printf("Result: %d",res);
}

int power(int a,int b)
{
    int x;
    x = pow(a,b);

    return x;
}
