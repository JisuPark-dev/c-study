#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElemenType;

typedef struct tagNode
{
    ElemenType Data;
}Node;

typedef struct tagArrayStack
{
    int Capacity;
    int Top;
    Node* Nodes;
}ArrayStack ;

void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElemenType Data);
ElemenType AS_Pop(ArrayStack* Stack);
ElemenType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif