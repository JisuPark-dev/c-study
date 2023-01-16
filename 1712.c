#include <stdio.h>
int a,b,c = 0;
int cost = 0, benfit = 0;
int main()
{   
    scanf("%d %d %d", &a, &b, &c);
    if (b>=c)
    {
        printf("-1");
        return 0;
    }
    printf("%d", (a/(c-b))+1);
    return 0;
}