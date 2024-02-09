#include<stdio.h>

int main()
{
//program of printing table of user entered number
int cnt=1,num;
printf("Enter number\n");
scanf("%d",&num);
while(cnt<=10)
{
printf("%d\n",num*cnt);
cnt++;
}
printf("\n");
//program of printing table in reverse number
for(cnt=10; cnt>=1; cnt--)
{
printf("%d\n", num*cnt);
}
printf("/n");
int x;
do{
printf("Enter positive number\n");
scanf("%d",&x);
}
while(x>0);
return 0;
}
