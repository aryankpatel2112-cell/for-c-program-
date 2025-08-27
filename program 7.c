#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",a,b);
    c = a / b;
    if(b != 0)
        {
        printf("result = %d\n",c);
        }
    else
       {
           printf("error");
       }
}
