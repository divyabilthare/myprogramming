#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int STACK_arr[MAX];
int top=-1;
void push();
void pop();
int peek();
void display();
int main()
{
int ch;
clrscr();
printf("Menu\n");
printf("1.push or insert:\n");
printf("2.pop or delete:\n");
printf("3.peek:\n");
printf("4.display or traverse:\n");
printf("5.Exit:\n");
 while(1)
 {
    printf("\nEnter your choice:");
    scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 peek();
 break;
 }
 case 4:
 {
 display();
 break;
 }
 case 5:
 {
 exit(0);
 }
 default:
 {
 printf("invalid number:\n");
 }
 }
 }
 }
 void push()
 {
 int data;
 if(top==MAX-1)
 {
 printf("Stack is overflow or full");
 }
 else
 {
 printf("Enter elements to be pushed:");
 scanf("%d",&data);
 top=top++;
 STACK_arr[top]=data;
 }
 }
 void pop()
 {
 if(top==-1)
 {
 printf("Stack is empty");
 }
 else
 {
 printf("popped element : %d\n",STACK_arr[top]);
 top--;
 }
 }
 int peek()
 {
 if(top==-1)
 {
 printf("stack is empty");
 return 0;
 }
 else
 {
 printf("%d",STACK_arr[top]);
 return(STACK_arr[top]);
 }
 }
 void display()
 {
 int i;
 if(top>=0)
 {
 printf("Elements:\n");
 for(i=top;i>=0;i--)
 printf("%d\n",STACK_arr[i]);
}
else
{
printf("Stack is empty");
}
}