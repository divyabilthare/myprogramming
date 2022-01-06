#include<stdio.h>
#include<conio.h>
int main()
{
int marks;

clrscr();
printf("enter marks:");
scanf("%d",&marks);
if(marks==100)
{ printf("brilliant");
}
else if(marks>=80 && marks<100)
{
printf("topper");
}
else if(marks>=60 && marks<80)
{
printf("medium");
}
else if(marks>50 && marks<=59)
{
printf("average student");
}
else
{
printf("fail");
}
return 0;
}


