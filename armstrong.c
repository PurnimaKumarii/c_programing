#include<stdio.h>
int main()
{
int n,rem,temp,sum=0;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(temp==sum)
{
printf("Armstrong number");
}
else{
printf("not armstrong");
}
return 0;
}
