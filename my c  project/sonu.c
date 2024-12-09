#include <stdio.h>
// 1.wtite a program to print to calculate average of three numbers are given by the user
int main()
{
    float a, b, c;
    printf("Enter your three numbers\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("Average is %0.2f", (a + b + c) / 3.0);
    return 0;
}
// 1.(a) write a program to print to calculate average of three numbers are given by the user
int m2()
{
    int a, b, c;
    float avg;
    printf("Enter your number\n");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Average is : %0.2f", avg);
    return 0;
}
/*2. Write a program to calculate curcumference of circle*/
int m3()
{
    int r;
    float c;
    printf("Enter Radius :\t");
    scanf("%d", &r);
    c = (2 * 3.14) * r;
    printf("curcumference is :%0.2f", c);
    return 0;
}
/*3. write a program to  calculate simple intrest */
int m4()
{
    int p, t;
    float r, si, Amount;
    printf("Enter principal:\t");
    scanf("%d", &p);
    printf("Enter Rate :\t");
    scanf("%f", &r);
    printf("Enter Time \t");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Simple intrest is : %0.2f\n", si);
    Amount = p + si;
    printf("Total Amount is %0.2f\n:", Amount);
    return 0;
}
/* 4. Write a program to calculate volume of a cuboid
घनाभ का प्रस्तीय क्षेत्रफल और घनाभ का आयतन का प्रोग्राम लिखिए*/
int m5()
{
    float l, b, h, v, c;
    printf("Enter your values:\n");
    printf("lenth :  \t", l);
    scanf("%f", &l);
    printf("Breath : \t", b);
    scanf("%f", &b);
    printf("Hight :  \t", h);
    scanf("%f", &h);
    v = 2 * (l * b + b * h + h * l);
    printf("\n");

    printf("Valume of cuboid is : %0.2f      \n", v);
    c = (l * b * h);
    printf("\n");
    printf("curcumfrence of cuboid is : %0.2f\n", c);
    printf("\n");
    return 0;
}

/*5.write a program to ask user about the cost
price and selling price banana per dozen calculate
the profit or loss earned upon selling 25 banana*/
int m6()
{
    float cp, sp, p, l, banana, n;

    printf("Enter here bana cost price and selling price\n");
    printf("Cost Price :\t");
    scanf("%f", &cp);
    printf("Selling Price:\t");
    scanf("%f", &sp);
    p = sp - cp;
    l = cp - sp;
    printf("Profit(+ve) : %0.2f\n", p);
    printf("Loss (-ve)  : %0.2f\n", l);

    printf("selling  banana :\n");
    scanf("%f", &n);
    banana = (cp - sp) / 12 * n;
    printf("Banana price is : %0.2f\n", banana);
    return 0;
}

/*6.write a program to ask user about the cost
price and selling price banana per dozen calculate
the profit or loss earned upon selling 25 banana*/

int m7()
{
    float cp, sp, profit;
    printf("Enter CP and SP 12 Banana\n");
    scanf("%f%f", &cp, &sp);
    profit = (sp - cp) / 12 * 25;
    printf("Profit(+ve)=%0.2f\t\n\Loss(-ve) = %0.2f", profit);
    return 0;
}
// 7. write a program to print a character from the user and print its ASCII code.
int m8()
{
    char character;
    printf("Enter your CHARACTER\t");
    scanf("%c", &character);
    printf("CHARACTER  IS : %c\n", character);
    printf("ASCCI CODE is : %d\t", character);
    return 0;
}
/*8.write a program to input an ASCII code from the user and print  its corresponding*/
int m9()
{
    char character;
    printf("Enter your ASSCI CODE\t");
    scanf("%d", &character);
    printf("ASCII CODE is : %c\n", character);
    printf("CHARACTER  is :%d\n", character);
    return 0;
}

// 9. write a program to input three characters from user and display characters with their corresponding ASCCI codes.
int m10()
{
char a, b, c;
    printf("Enter three characters\n");
    scanf(" %c %c %c", &a, &b, &c);
    printf("%c:%d\n%c:%d\n%c:%d", a,a,b,b,c,c);
    return 0;
}
//9. write a program to print last digit of a given number
#include<stdio.h>
int m11()
{
    int  a,c;
    printf("Enter digit\n");
    scanf("%d",&a);
    c=a%10;
    printf("Last digit : %d",c);
    return 0;

}

//5.write a program to print a given number without its last digit
#include<stdio.h>
int m12()
{
    int  a;
    printf("Enter ditit\n");
    scanf("%d",&a);
    printf("without last digit : %d",a,a/10);
    return 0;

}
