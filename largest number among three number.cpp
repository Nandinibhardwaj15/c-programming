#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter three numbers");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is largest ", a);
    else if (b > a && b > c)
        printf("%d is largest", b);
    else if (c > a && c > b)
        printf("%d is largest", c);

    return 0;
}
