#include <stdio.h>

int main() {
    float a, b, c;


    printf("Please enter length of each side of your triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || 
        a + b <= c || a + c <= b || b + c <= a) {
        printf("This is NOT a possible triangle.\n");
    }
    else if (a == b && b == c && a == c) {
        printf("This is an equilateral triangle.\n");
    }
    else if (a == b || a == c || b == c) {
        printf("This is an isosceles triangle.\n");
    }

    else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}
