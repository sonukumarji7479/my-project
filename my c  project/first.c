#include <stdio.h>
int main()
{
    int l1 = 100, l2 = 115, l3 = 175, l4 = 195, total;
    int m1 = 700, m2 = 900, m3 = 1300, macbook;
    int w1 = 100, w2 = 200, w3 = 150, w4 = 70, w5 = 130, watch;
    float h1 = 12.50, h2 = 60.70, h3 = 80.30, h4 = 90.63, headphone;
    float ip13 = 70.99, ip14 = 45.99, ip15 = 49.99, iphone;
    float bill;
    printf("COMCONEY NAME IS (APPLE):\n");
    printf("BRAND NAME:\n");
    printf("Leptop:\nmacbook:\nHeadphone:\nApple watch:\niphone:\n");
    printf("\n");
    printf("\n");
    printf("BRAND NAME:( LEPTOP )\n");
    total = l1 + l2 + l3 + l4;
    printf("LEPTOP 5 PICE ORDER PRICE IS: %d\n", total);
    printf("\n");
    printf("\n");

    printf("BRAND NAME:( MACKBOOK )\n");
    macbook = m1 + m2 + m3;
    printf("macbook 3 PICE ORDER PRICE IS: %d\n", macbook);
    printf("\n");
    printf("\n");

    printf("BRAND NAME :( APPLE WATCH )\n");
    watch = w1 + w2 + w3 + w4 + w5;
    printf("watch 5 PICE ORDER PRICE IS: %d\n", watch);
    printf("\n");
    printf("\n");

    printf("BRAND NAME :( HEADPHONE )\n");
    headphone = h1 + h2 + h3 + h4;
    printf("LEPTOP 5 PICE ORDER PRICE IS: %0.2f\n", headphone);
    printf("\n");
    printf("\n");

    printf("BRAND NAME :( IPHONE )\n");
    iphone = ip13 + ip14 + ip15;
    printf("Iphone 5 PICE ORDER PRICE IS: %0.2f\n", iphone);
    printf("\n");
    printf("\n");

    bill = total + macbook + watch + headphone + iphone;
    printf("TOTAL COMPANEY BILL : %0.2f", bill);
    printf("\n");
    printf("\n");

    return 0;
}