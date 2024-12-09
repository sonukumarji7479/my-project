#include <stdio.h>
int m1()
{
    /*---------------------- LIST OF LOOP PROGRAMMING --------------------------*/

    // 1.Write a program to print all natural number from 1 to n- using while loop
    int n, i = 1;
    printf("Enter your number\t");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}

// 2.write a program to print all n natural tables
int m2()
{
    int n, i = 1;
    printf("Enter your number\t");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d*%d=%d\n", n, i, n * i);
        i++;
    }
    return 0;
}

// 3.write a program to print all alphabets form a to z using while loop.
int m3()
{
    char i = 'a';
    while (i <= 'z')
    {
        printf("%c\n", i);
        i++;
    }
    return 0;
}
// 4.write a program to print all even numbers between 1 to 100.
int m4()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i + i);
        i++;
    }
    return 0;
}

// 5. write a program print all odd number between 1 to 100
int m5()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i = i + 2;
    }
    return 0;
}

// 6.write a c program to find sum of all natural numbers betwwen 1 to n.
int m6()
{
    int i = 1, n, t = 0;
    printf("Enter your number ");
    scanf("%d", &n);
    while (i <= n)
    {
        t = t + i;
        i++;
    }
    printf("sum = %d", t);
    return 0;
}
// 7.write a program to find sum of all even numbers 1 to n
int m7()
{
    int i = 1, n, t = 0;
    printf("Enter your number ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
            t = t + i;
        i++;
    }
    printf("sum = %d", t);
    return 0;
}
// 8.write a program to find sum of all odd numbers 1 to n
int m8()
{
    int i = 1, n, t = 0;
    printf("Enter your number ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 1)
            t = t + i;
        i++;
    }
    printf("sum = %d", t);
    return 0;
}
// 9. write a program to print multiplication table of any number.
int m9()
{
    int i = 1, n;
    printf("Enter any numbers:\t");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d*%d=%d\n", n, i, n * i);
        i++;
    }
    return 0;
}
// 10. write a program to count  number of digit digit of a number
int m10()
{
    int x, count = 0;
    printf("Enter your digit:\t");
    scanf("%d", &x);
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    printf("Total number of digit=%d", count);

    return 0;
}

// write a c program to find first and last digit a numbers.
int m11()
{
    int x, y, count;
    printf("Enter your digits:\t");
    scanf("%d", &x);
    while (x != 0)
    {
        x / 10;
        count++;
        y % 10;
        count--;
    }
    printf("%d%d", count, count);

    return 0;
}

// write a program to print sum of given digit numbers
int m12()
{
    int n, s = 0;
    printf("Enter a Digit:\t");
    scanf("%d", &n);
    while (n)
    {
        s = s + n % 10;
        n = n / 10;
    }
    printf("sum is %d", s);
    return 0;
}

int m13()
{
    int n, r = 0;
    printf("Enter a Digit:\t");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        printf("%d", r);
        n = n / 10;
    }
    return 0;
}

// find the given nuber is prime or not
int m14()
{
    int n, i, c = 1;
    printf("Enter your digit:\t");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        if (n % i == 0)
        {
            c++;
        }
    if (c == 2)
        printf("prime number\n");
    else
        printf("not prime\n");
    return 0;
}
// write a program to find  the prime number or not.
int m15()
{
    int n, i = 2;
    printf("Enter digit:\t");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
        if (n % i == 0)
        {
            break;
        }
    if (n != i)
        printf("not prime");
    else
        printf("prime");
    return 0;
}
// game

int m16()
{
    int c, n;
    for (c = 1; c <= 3; c++)
    {
        printf("Enter an even number:");
        scanf("%d", &n);
        if (n % 2 == 0)
            break;
    }
    if (c == 4)
        printf("Game over");
    else
        printf("you won ");
    return 0;
}
/*-----------------ASSINGMENT 12 -----------------------*/
// 1.write a program to print mysirG N time.
int m17()
{
    int n, i = 1;
    printf("Enter N number:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("mysirG\n");
    }
    return 0;
}
// 2.write a program to print n natural numbers.
int m18()
{
    int n, a = 1;
    printf("Enter N naural number:\t");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        printf("%d\n", a);
    }
    return 0;
}
// 3.write a program to print n natural number in reverse order.
int m19()
{
    int n, a = 1;
    printf("Enter your number:\t");
    scanf("%d", &n);
    for (a = 1; n >= a; n--)
    {
        printf("%d\n", n);
    }
    return 0;
}

// 4.write a program to print first n ood natural numbers.
int m20()
{
    int n, i = 1;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    return 0;
}

// 5.write a program to print first n odd numbers in revese order.
int m21()
{
    int n, i = 1;
    printf("Enter a numbers:\t");
    scanf("%d", &n);
    for (i = 1; n >= i; n--)
        if (n % 2 == 1)
        {
            printf("%d\n", n);
        }
    return 0;
}
// 6.write a program to print first n even natural numabers.
int m22()
{
    int n, i = 1;
    printf("Enter your numbers:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    return 0;
}
// 7.write a program to print first n even natural number in reves order.
int m23()
{
    int n, i = 1;
    printf("Enter your numbers:\t");
    scanf("%d", &n);
    for (i = 1; n >= i; n--)
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    return 0;
}
// 8.write a program to print square of first n natual numbers.
int m24()
{
    int n, i = 1;
    printf("Enter a numbers:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("squire of %d is: = %d\n", i, i * i);
    return 0;
}

// 9.write a program to print cube of first n natual numbers:
int m25()
{
    int n, i = 1;
    printf("Enter a numbers:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("cube of %d is: = %d\n", i, i * i * i);
    return 0;
}

//.10 write a program to print talble.
int m26()
{
    int n, i = 0;
    printf("Enter Table:\t");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)

        printf("%d*%d = %d\n", n, i, n * i);
    return 0;
}
/*----------------------ASSIGNMENT 13 ---------------------*/

// 1.write a program to sum of n natual numbers
int m27()
{
    int n, i = 1, sum = 0;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i;
    printf("%d\n", sum);
    return 0;
}

// 2.write a program to calculate sum of first even numbers
int m28()
{
    int n, i = 1, sum;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    printf("%d\n", sum);
    return 0;
}
// 3.write a program to calculate sum of first odd numbers
int m29()
{
    int n, i = 1, sum;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    printf("%d\n", sum);
    return 0;
}
// 4.write a program to calculate sum of square of  first n natual numbers
int m30()
{
    int n, i = 1, sum;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("%d\n", sum);
    return 0;
}
// 5.write a program to calculate sum of cubes of first n natual numbers
int m31()
{
    int n, i = 1, sum;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
    {
        sum = sum + i * i * i;
    }
    printf("%d\n", sum);
    return 0;
}

/*-----------------------------ASSIGNMENT 14 -------------------------------*/

// 1.Write a program to calculate factoril of a numbers.
int m32()
{
    int n, i = 1,f=1;
    printf("Enter a factoril numbers:\t");
    scanf("%d", &n);
    for (i=1,f=1; i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}
//2.write a program to count digit in a given number
int main()
{
    int n,count;
    printf("Enter a Digit:\t");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}

//3.write a program to check whether a given number is a  prime number or not.
int main()
{
    int n,i;
    printf("Enter your number:\t");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%i==0)
    {
      break;
    }
    if(n==i)
    printf(":prinme number");
    else
    printf("not prime number");
    return 0;
}