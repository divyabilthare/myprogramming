#include<stdio.h>
#include<conio.h>

void main()
{
int arr[10],n,i;
clrscr();
printf("enter size of array:");
scanf("%d",&n);
printf("enter %d positive element\n:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n enter even number:");
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
printf("%d ",arr[i]);
}
}
printf("\n odd numbers:");
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
printf("%d ",arr[i]);
}
}
}