
//   ----------------------------- ASSINGMENT 1 ------------------------------- //
// 1.write  a program to print hello studant on the screen.
#include <stdio.h>
int m1()
{
    printf("hello student");

    return 0;
}

// 2.write a program to print hello in the first line and sudent in the second line
int m2()
{
    printf("hello\n");
    printf("student");
    return 0;
}
// 3.write a program to print "mysirG" on the screen (Remmenmber to print in double quates)
int m3()
{
    printf("\"mysirG\"");
    return 0;
}
// 4. Write a progaram to print \n on the srceen
int m4()
{
    printf("\\n");

    return 0;
}
// 5. write a program to print \r on the screen
int m5()
{
    printf("\\r");

    return 0;
}
// 6.write a program to print "Teacher's Day" on the screen ("Remeber to print double and signal quotes")
int m6()
{
    printf("\"Teachers day\"");
    printf("\n");
    printf("\'Teacher,s day\'");
    return 0;
}
// 7 write a program to print to calculate sum of two integers are taken from user.
int m7()
{
    int a, b, c;
    printf("Enter your tow numbers:\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d+%d:=%d", a, b, c);
    return 0;
}
// 8. write a program to calculate sum of two integers numbers are taken from user through keywords
int m8()
{
    int a;
    printf("Enter any numbeer");
    scanf("%d", &a);
    printf("%d", a * a);
    return 0;
}
// 9.write a program to calculate area of a rectangle input appropriate data from the user.
int m9()
{
    int lenth, width;
    printf("Enter your lenth:\t");
    scanf("%d", &lenth);
    printf("Enter your width:\t");
    scanf("%d", &width);
    int calcualte = lenth * width;
    printf("%d*%d: Rectangle apporiate: %d", lenth, width, calcualte);
    return 0;
}

// 10 WAP to find the area of the circle.take radius of the circle from user as input.
int m10()
{
    float r, a = 3.14, t;
    printf("Enter your radius: ");
    scanf("%f", &r);
    t = a * r * r;
    printf("Area of the circle is: =  %0.2f", t);
    return 0;
}
//   ----------------------------- ASSINGMENT 2 ------------------------------- //

// 1.write a program to calculate of thee integers numbers are given by user.
int m11()
{
    int a, b, c;
    float avg;
    printf("Enter first number:\t");
    scanf("%d", &a);
    printf("Enter second  number:\t");
    scanf("%d", &b);
    printf("Enter third  number:\t");
    scanf("%d", &c);
    avg = (a + b + c) / 3.0;
    printf("average is :%0.2f", avg);
    return 0;
}

// 2.write a program to calculate circuference(2.3.14*r) of a circule.
int m12()
{
    float r = 3.14, ciruference;
    printf("Enter radius\t");
    scanf("%f", &r);
    ciruference = 2 * 3.14159 * r;
    printf(" circule of ciruference is: %0.2f", ciruference);
    return 0;
}

// 3.write a program to calculate valume of a cuboid=(l*b*h).
int m13()
{
    int l, b, h, v;
    printf("Enter your lenth:\t");
    scanf("%d", &l);
    printf("Enter barth:\t");
    scanf("%d", &b);
    printf("Enter Hight:\t");
    scanf("%d", &h);
    v = l * b * h;
    printf("valume of a cuboid: %d", v);
    return 0;
}

// 4.write a program to calculate simple interest.
//  simple interesr = principle*rate*time/100
int m14()
{
    int si, p, r, t, amount;
    printf("Enter principle Amount:\t");
    scanf("%d", &p);
    printf("fixed your Rate:\t");
    scanf("%d", &r);
    printf("Set time priod of interest:\t");
    scanf("%d", &t);
    si = p * r * t / (100);
    printf("simple interest :%d\n", si);
    amount = si + p;
    printf("Total Amount:%d", amount);
    return 0;
}
// 5 Find the simple interest and amount on ₹1500 for 6 months at 12% annual interest rate. from the user.
int m15()
{
    int si, p, r, t, amount;
    printf("Enter principle Amount:\t");
    scanf("%d", &p);
    printf("Fixed the Rate:\t");
    scanf("%d", &r);
    printf("Set time priod of interest:\t");
    scanf("%d", &t);
    si = p * r * t / (100);
    printf("simple interset:%d\n", si / 12);
    amount = p + si / 12;
    printf("Total Amount is:%d", amount);
    return 0;
}

/*6. write a program to ask user the cost price and selling price banana per dozen
calculate the profit or loss upon selling 25 banana*/
int m16()
{
    float cp, sp, profit, loss, banana;
    printf("Enter your cost price:\t");
    scanf("%f", &cp);
    printf("Enter your selling price:\t");
    scanf("%f", &sp);
    profit = sp - cp;
    printf("profit(+): %0.2f\n", profit);
    loss = cp - sp;
    printf("loss(-):%0.2f\n", loss);
    banana = cp / 12;
    printf("25 banana price is:%0.2f", banana * 25);
    return 0;
}

//---------------------------- ASSINGNMENT 3 ----------------------------------//

/*1. Write a program to input a character from the user and print its ASCII code.*/
int m17()
{

    char c;
    printf("Enter the character:\t");
    scanf("%c", &c);
    printf("ASCII CODE IS:%d", c);
    return 0;
}

/* 2. Write a program to input a ASCII code from the user and print its corresponding character*/
int m18()
{

    int i;
    printf("Enter the character:\t");
    scanf("%d", &i);
    printf("ASCII CODE IS:%c", i);
    return 0;
}
/*3.write a program to input three character from the user and display character with their
corresponding ASCII  code.*/
int m19()
{
    char a, b, c;
    printf("Enter first character:\t");
    scanf("%c", &a);
    printf("Character is:%c\n", a);
    printf("ASSCI CODE IS:%d\n", a);

    printf("Enter first character:\t");
    scanf(" %c", &b);
    printf("Character is:%c\n", b);
    printf("ASSCI CODE IS:%d\n", b);

    printf("Enter first character:\t");
    scanf(" %c", &c);
    printf("Character is:%c\n", c);
    printf("ASSCI CODE IS:%d\n", c);

    return 0;
}
// 4. Write a program to print last digit of a given Number.

int m20()
{
    int a, digit;
    printf("Enter Digit:\t");
    scanf("%d", &a);
    digit = a % 10;
    printf("last digit is:%d", digit);
    return 0;
}
// 5. Write a program to print without last digit of a given Number.

int m21()
{
    int a, digit;
    printf("Enter Digit:\t");
    scanf("%d", &a);
    digit = a / 10;
    printf(" without last digit is:%d", digit);
    return 0;
}

//---------------------------- ASSINGNMENT 4 ----------------------------------//

// 1.write a program to calculate size of a characters constant.

int m22()
{
    char a;
    printf("Size of character constent:%lu\n", sizeof(a));
    return 0;
}

// 2.write a progrma to claculate size of a real constent.

int m23()
{
    float a;
    double b;
    printf("Size of real constent:%lu\n", sizeof(a));
    printf("Size of real constent:%lu\n", sizeof(b));
    return 0;
}

/*3.write a program with one char type variable asssing 'A' in the variable now change
the value of variable from 'A' to 'B' using increment operator*/

int m24()
{
    char x = 'A';
    x++;
    printf("%c", x);
    return 0;
}

// 4.write a program to swap values of two int variables.
int m25()
{
    int a, b, c;
    printf("Enter a :\t");
    scanf("%d", &a);
    printf("Enter b:\t");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d\nb=%d\t", a, b, c);
    return 0;
}

// 5.write a  program to swap value of two int variable without using a third variable.
int m26()
{
    int a, b;
    printf("Enter a:\t");
    scanf("%d", &a);
    printf("Enter a:\t");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a=%d\nb=%d", a, b);
    return 0;
}

// 6.write a progrma to swap value of two int variable without using third veriable and[+,-] operators
int m27()
{
    int a = 10;
    int b = 20;

    a = a * b; // 10*20 = 200
    b = a / b; // 200/20 = b[10]
    a = a / b; // 200/10 = a[20]

    printf("a=%d\nb=%d", a, b);

    return 0;
}

// 7.write a program to swap value of two int variable without using third variable and arithmatic operators
int m28()
{
    int a;
    int b;
    printf("Enter first Numbers :\t");
    scanf("%d", &a);
    printf("Enter second  Numbers :\t");
    scanf("%d", &b);
    a = a ^ b; // a+b = a=[30]
    b = a ^ b; // a^b =30-20 b=[10]
    a = a ^ b; // a^b = 30-10  a=[20]
    printf("first number:=%d\nsecond number:= %d", a, b);
    return 0;
}

// 8.write a program to swap value of two int variable in single line arithmatic expression

int m29()
{
    int a = 10;
    int b = 20;

    a = a + b, b = a - b, a = a - b;

    printf("a=%d\nb=%d", a, b);
    return 0;
}

//---------------------------- ASSINGNMENT 5 ----------------------------------//
// 1. write a program to input a three digit and display the sum of the digit

int m30()
{
    int a, x, p, y, z, sum;
    printf("Enter any three digit ");
    scanf("%d", &a);
    x = a % 10;
    p = a / 10;
    y = p % 10;
    z = p / 10;
    sum = x + y + z;
    printf("sum of digit:%d", sum);
    return 0;
}

// 2.write a program to find ASCII code  of the character '+'.
int m31()
{
    printf(" ASCCI CODE:%d", '+');

    return 0;
}

// 3.write a program to print size of an int ,a,float,ad,char and a,double type

int m32()
{
    printf("Size fo Integer:%d\n", sizeof(int));
    printf("Size fo Character:%d\n", sizeof(char));
    printf("Size fo real:%d\n", sizeof(float));
    printf("Size fo real:%d\n", sizeof(double));

    return 0;
}

// 4.write a program to make the last digit of a number stored in a varable as zero (example if x=2345 then make it x=2340 )
int m33()
{
    int x = 2345;
    printf("%d%d", x = x / 10);
    return 0;
}

int m34()
{
    int x = 2345;
    int y = 2345;
    x = x / 10;
    y = y % 10 < 5;
    printf("%d%d", x, y);
    return 0;
}

//---------------------------- ASSINGNMENT 6 ----------------------------------//

// 1. Assume prince of 1 USD is INR  84.67 write a program to take the amount in INR and convert it into usd
#include <stdio.h>
int m35()
{
    float USD, INR;
    printf("INDIAN RUPEES:\t");
    scanf("%f", &INR);
    USD = INR / (84.67);
    printf("USD DOLLAR:%0.2f\t", USD);

    return 0;
}

// 2.write a progrma to take a three digit numbers from the user and rotate its digit by one position towards the right

#include <stdio.h>
int m36()
{
    int n, a, b, c, d;
    printf("Enter a numbers:\t");
    scanf("%d", &n);

    a = n % 10; // 123%10 = a[3]
    b = n / 10; // 123/10 = b[12]
    c = b % 10; // 12%10 = c[2]
    d = b / 10; // 12/10 = d[1]

    printf("%d%d%d", a, c, d); // [a] [c]  [d] = 321
    return 0;
}

// 3.Write will be the vlaue stored in the variable x after executing following statment x=10>8>4

int m37()
{
    int x = 10 > 8 > 4;
    printf("value:%d", x);
    return 0;
}

// 4.what will be the value stored in the variable x after executing following statement x=!2>-2

int m38()
{
    int x = !2 > -2;
    printf("value:%d", x);
    return 0;
}

// 5.what will be the value stored in the variable x after excuting following statment:x=3<0&&5>0;
int m39()
{
    int x = 3 < 0 && 5 > 0;
    printf("value:%d", x);
    return 0;
}

//---------------------------- ASSINGNMENT 7 ----------------------------------//

// 1.write a program to check whether a given number is positive or non positive
int m40()
{
    int a;
    printf("Enter a number:\t");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("positive");
    }
    else
    {
        printf("non positive");
    }

    return 0;
}

//2.write a program to chek whether a given number is divisible by 5 or not
int m41()
{
    int a;
    printf("Enter a number:\t");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("%d is devisible by 5:\n",a);
    }
    else
    {
        printf("it is not devisible by 5:\n");
    }

    return 0;
}

// 3.write a program to check whether a given number is an even number or an odd number .
int m42()
{
    int x;
    printf("Enter a number:\t");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d Is a even number\n",x);
    }
    else
    {
        printf("%d is a odd number\n",x);
    }
    return 0;

} 

//4.write a program to chek whether a given number is an even number or an odd number without using % operator.
int m43()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    if ((x / 2* 2 - x) == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}

//---------------------------- ASSINGNMENT 8 ----------------------------------//

//1.write a program to check whether a given number is a three digit number or not.
int m44()
{
    int a;
    printf("Enter a number:\t");
    scanf("%d",&a);
    if(a/1000)
    {
        printf("%d is not a three digit:\n",a);
    }
    else if(a/100)
    {
        printf("%d a three digit:\n",a);
    }
    else if(a/10)
    {
        printf("%d is not three digit:\n",a);
    }
       else if(a/1)
    {
        printf("%d is not three digit:\n",a);
    }
    return 0;
}

//2.write a progrma to print greater between two numbers print one number if both are same.
int m45()
{
    int a;
    int b;
    printf("Enter first Number:\t");
    scanf("%d",&a);
     printf("Enter second Number:\t");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is grater",a);
    }
    else if(b>a)
    {
        printf("%d is grater",b);
    }
    else
    {
        printf("Both are same");
    }
    return 0;
}
/*3.write a program to check whether roots of a given qudaratic equation .
are real & distict & equal or imaginary roots*/
int m46()
{
    int a,b,c;
    int x,y,z;
    printf("Enter or qudaratic value:\n");
    printf("Enter a value:\t");
    scanf("%d",&a);
     printf("Enter b value:\t");
    scanf("%d",&b);
     printf("Enter c value:\t");
    scanf("%d",&c);

    if(x=b*b-4*a*c==0) //formula b2-4ac
    {
     printf("Real and equal");
    }
    else if(y=b*b-4*a*c>=0)
    {
     printf("Real and uequal");
    }
    else if(z=b*b-4*a*c<0)
    {
     printf("There will be no originalt");
    }
  return 0;
}

/*write a program to chek whether a given year is a leap year or not */
int main()
{
   int year;
   printf("Enter year:");
   scanf("%d",&year);
   if(year%4==0)
   {
   printf("%d : is a leap year\n",year);
   }
   else if(year%100!=0)
   {
   printf("%d : is a leap year\n",year);
   }
   else if(year%400==0)
   {
    printf("%d: is not a leap year\n",year);
   }
   return 0;
}