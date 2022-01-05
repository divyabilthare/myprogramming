#include<stdio.h>
int main()
{
 int i,j,rows;
char A,E;
printf("Enter the number of rows:");
scanf("%d",&rows);
for(i='A';i<='E';i++)
{
for(j='A';j<=i;j++)
{
printf("%c ",j);
}
printf("\n");
}
return 0;}