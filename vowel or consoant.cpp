#include <stdio.h>

int main(int argc, char const *argv[])
{
    char alpha;
    char a,e,i,o,u;
    printf("enter an alphabet");
    scanf("%c", &alpha);

    if(alpha==a || alpha==e || alpha==o || alpha==u || alpha==i )
    printf("it is a vowel");
    else
    printf("not a vowel");
    return 0;
}
