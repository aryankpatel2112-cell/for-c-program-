#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number");
    sacnf("%d %d",&a,&b);
    printf("addition: %d + %d = %d\n",a,b,a+b);
    printf("subtraction: %d - %d = %d\n",a,b,a-b);
    printf("multiplication: %d * %d = &d\n",a,b,a*b);
    if(b != 0)
      {printf("division: %d / %d = %d\n",a,b,a/b);}
    else
    {printf("division: can not divide by 0\n");}

}
