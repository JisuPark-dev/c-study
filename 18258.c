#include <stdio.h>
#include <string.h>

int stack[100001] = {0,};
int Front = 0;
int Rear = 0;

void push(int num);
void pop();
void front();
void back();
void size();
void empty();

int main(void)
{
    int n = 0;
    scanf("%d", &n);    
    char x[10];
    for (int i = 0; i<n; i++)
    {
        scanf("%s",&x);
        if (strcmp(x, "push") == 0) {
			int num;//문자 이후에 포함되어 있는 숫자
			scanf("%d", &num);
            push(num);
		}
        else if (strcmp(x, "pop") == 0) {
			pop();
		}
        else if (strcmp(x, "front") == 0) {
			front();
		}
        else if (strcmp(x, "back") == 0) {
			back();
		}
        else if (strcmp(x, "size") == 0) {
			size();
		}
        else if (strcmp(x, "empty") == 0) {
			empty();
		}

    }
}

void push(int num) {
	stack[Rear] = num;
	Rear++;
}
void pop()
{
    if(Rear-Front !=0)
    {
        printf("%d\n", stack[Front]);
        Front++;
    }
    else
    {
        printf("-1\n");
    }
}
void front()
{
    if(Rear-Front !=0)
    {
        printf("%d\n", stack[Front]);
    }
    else{
        printf("-1\n");
    }
}

void back()
{
    if(Rear-Front !=0)
    {
        printf("%d\n", stack[Rear-1]);
    }
    else{
        printf("-1\n");
    }
}

void size()
{
    printf("%d\n", Rear-Front);
}

void empty()
{
    if (Rear-Front !=0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}