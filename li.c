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
/*day 3 program*/
#include<stdio.h>
#include<math.h>
void main()
{
  double a,b,c,d,r1,r2,rp,img;
printf("Enter the coefficients of a b c\n");
scanf("%lf %lf %lf :",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d==0)
{
printf("The roots are real and equal");
  r1=r2
  r1=(-b)/(2*a);
printf("\n The real roots are %lf:",r1");
}
if(d>0)
{
printf("The roots are complex and different");
r1=((-b)+sqrt(d))/(2*a);
r2=((-b)-sqrt(d))/(2*a);
printf("\n The root 1 is %lf:",r1);
printf("\n The root 2 is %lf:",r2);
}
if(d<0)
{
printf("The roots are imaginary");
rp=(-b)/(2*a);
img=sqrt(-d)/(2*a);
printf("\n The root 1 is %lf+i %lf =",rp,img);
printf("\n The root 2 is %lf+i %lf =",rp,img);
}
}
