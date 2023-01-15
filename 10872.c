/*0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>
int factorial(int n);

int main()
{
    /*n입력받기*/
    int n = 0;
    scanf("%d", &n);

    printf("%d",factorial(n));
    
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return n * factorial(n-1);
    }
}