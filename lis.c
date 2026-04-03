/*#include<stdio.h>
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
/* day 8 - pro 1*/
#include <stdio.h>
int main() {
    int num, original, rem, result = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        result += rem * rem * rem;
        num /= 10;
    }

    if (result == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}
/* day 8 - pro 2*/
#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed: %d", rev);
    return 0;
}
/* day 8 - pro 3*/
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], sum[2][2];

    printf("Enter elements of matrix A:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of matrix B:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Result:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
/* day 8 - pro 4*/
#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=1; i<num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("Perfect Number");
    else
        printf("Not Perfect");

    return 0;
}
/* day 9- pro 1*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
/* day 9- pro 2*/
#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for(i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
/* day 9- pro 3*/
#include <stdio.h>

int main() {
    int arr[5], i, key, found = 0;

    printf("Enter elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Not found");

    return 0;
}
/* day 9- pro 4*/
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 1;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf("Number of words: %d", count);
    return 0;
}
/* day 9- pro 5*/
#include <stdio.h>

int main() {
    int a[2][2], i, j;

    printf("Enter matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}
/* day 10- pro 1*/
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 1;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\n')
            count++;
    }

    printf("Words = %d", count);
    return 0;
}
/* day 10- pro 2*/
#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("Perfect Number");
    else
        printf("Not Perfect");

    return 0;
}
/* day 10- pro 3*/
#include <stdio.h>

int main() {
    int n, i, j, coef = 1;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        coef = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
/* day 10- pro 4*/
#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);
    return 0;
}
/* day 10- pro 5*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
/* day 11- pro 1*/
#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20];
    int k;

    printf("Enter 5 words:\n");
    for(int i=0;i<5;i++)
        scanf("%s", words[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i=0;i<5;i++) {
        if(strlen(words[i]) > k)
            printf("%s\n", words[i]);
    }
    return 0;
}
/* day 11- pro 2*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to remove: ");
    scanf(" %c", &ch);

    char result[100];

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Result: %s", result);
    return 0;
}
/* day 11- pro 3*/
#include <stdio.h>

int main() {
    int arr[10], count = 0;

    printf("Enter 10 elements:\n");
    for(int i=0;i<10;i++)
        scanf("%d", &arr[i]);

    for(int i=0;i<10;i++) {
        if(arr[i] == 2)
            count++;
    }

    printf("2 appears %d times", count);
    return 0;
}
/* day 11- pro 4*/
#include <stdio.h>

int main() {
    float f, c;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0/9.0) * (f - 32);
    printf("Celsius: %.2f", c);

    return 0;
}
/* day 12- pro 1*/
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}
/* day 12- pro 2*/
#include <stdio.h>

int main() {
    float amount, gst_rate, gst, total;

    printf("Enter original amount: ");
    scanf("%f", &amount);

    printf("Enter GST rate (%%): ");
    scanf("%f", &gst_rate);

    gst = (amount * gst_rate) / 100;
    total = amount + gst;

    printf("GST Amount: %.2f\n", gst);
    printf("Total Amount: %.2f\n", total);

    return 0;
}
/* day 13- pro 1*/
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);
    return 0;
}
/* day 13- pro 2*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(i=0;i<len/2;i++) {
        if(str[i] != str[len-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
/* day 14 - pro 1*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = 5;

    int largest = arr[0], second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest: %d", second);
    return 0;
}
/* day 14- pro 2*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int last = arr[n - 1];

    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/* day 15- pro 1*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = 6;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("Duplicate: %d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}
/* day 15- pro 2*/
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5, count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    while(count < n) {
        arr[count++] = 0;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/* day 16- pro 1*/
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
            }
        }
    }

    return 0;
}
/* day 17 - pro 1
  include<stdio.h>
  void main()
{
float=a,b,result
printf("Enter the 2 operands")
  scanf("%d %d:",&a,&b)
  result=a+b
  printf("/n Result= ",result)
  }
/* day 18 
  
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
/* day 19*/
#include <stdio.h>

int main() {
    int n, arr[100], visited[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
/* day 20 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a[] = {1, 5, 9};
    int b[] = {2, 3, 8};
    int n = 3, m = 3;

    for (int i = 0; i < n; i++) {
        if (a[i] > b[0]) {
            swap(&a[i], &b[0]);

            int first = b[0];
            int k;
            for (k = 1; k < m && b[k] < first; k++) {
                b[k - 1] = b[k];
            }
            b[k - 1] = first;
        }
    }

    printf("Merged arrays:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}
/*day 21 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int detectCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = head; // cycle

    if (detectCycle(head))
        printf("Cycle detected");
    else
        printf("No cycle");

    return 0;
}
/* day 22 */
