#include<stdio.h>
int swap(int a,int b)
{
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d\n",a,b);
}
int main()
{
int a,b;
printf("Enter two no \n");


swap(a,b);
return 0;
}
