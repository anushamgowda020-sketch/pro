#include<stdio.h>
void main()
{
  double cgpa1,cgpa2;
printf("The cgpa of 1st person is:"\n);
scanf("%lf",&cgpa1);
printf("The cgpa of 2nd person is:"\n);  
scanf("%lf",&cgpa2);
printf("The cgpa of 1st and 2nd persons are %lf %lf :"cgpa1,cgpa2);
}
/* day 5 */
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}
/* day 5 - pro 2*/
#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of the circle = %.2f", area);

    return 0;
}
/* day 5 - pro 3*/
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of the triangle = %.2f", area);

    return 0;
}
/* day 6 - pro 1*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
/* day 6 - pro 2*/
#include <stdio.h>
int main() {
    int n = 4;
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
/* day 6 - pro 3*/
#include <stdio.h>
int main() {
    int a = 2, b = 5, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d", a, b);
    return 0;
}
/* day 6 - pro 4*/
#include <stdio.h>
int main() {
    int a = 10, b = 20;
    if(a > b)
        printf("a is largest");
    else
        printf("b is largest");
    return 0;
}
/* day 6 - pro 5*/
#include <stdio.h>
int main() {
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", i);
    return 0;
}
/* day 7 - pro 1*/
#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
/* day 7 - pro 2*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) flag = 0;

    for(i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}
/* day 7 - pro 3*/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Resultant matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
/* day 7 - pro 4*/
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
/* day 7 - pro 5*/
#include <stdio.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter ID, Name, Marks: ");
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n",
               s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}
