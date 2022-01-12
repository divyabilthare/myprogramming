#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int n,ans;
printf("Enter any number :");
scanf("%d",&n);
ans=fact(n);
printf("%d",ans);
}
int fact(int n)
{
if(n==0)
{
return(1);
}
else
return(n*fact(n-1));
}
