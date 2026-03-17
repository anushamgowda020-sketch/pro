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
