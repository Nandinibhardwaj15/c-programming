#include <stdio.h>

int main()
{
    char alpha;
    char a,e,i,o,u;
    printf("enter an alphabet");
    scanf("%c", &alpha);

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' )
    printf(" it is a vowel");
    else
    printf("it is a consonant");
    return 0;
}