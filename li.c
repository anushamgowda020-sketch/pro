/*first program*/
#include<stdio.h>
#include<conio>h>
  void main()
  {
char op ;
int a,b,c;
clrscr();
printf("Enter the operator of your choice for further operations\n");
scanf("%c",&op);
printf("Enter the 2 values as operands:");
scanf("%d %d:",&a,&b);
switch(op)
{
case '+':
c=a+b;
printf("The sum of two numbers entered are:");
printf("%d:",c);
break;
case '-':
c=a-b;
printf("The difference of two numbers entered are:");
printf("%d:",c);
break;
case '*':
c=a*b;
printf("The product of two numbers entered are:");
printf("%d:",c);
break;
case '/':
c=a/b;
printf("The quotient of two numbers entered are:");
printf("%d:",c);
break;
default:
printf("You have entered other operator");
break;
}
getch()
}
/*day 2 program*/
  #include<stdio.h>
void main()
{
  printf("Hello guys Good Morning and welcome to my class");
}


