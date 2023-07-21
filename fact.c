#include<stdio.h>
void fact(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
void fact(int n)
{
    if (n>=1)

        printf(n*fact(n-1));
    else
        printf("1");
}
