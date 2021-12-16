#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek()
{
    if (isempty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
        return stack[top];
}

int pop()
{
    if (!isempty())
    {
        int data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Stack is empty\n");
        return -1;
    }
}

int push(int data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
        return 1;
    }
    else
    {
        printf("Stack is full\n");
        return -1;
    }
}

int main()
{
    push(3);
    push(5);
    push(9);
    push(12);
    push(15);

    printf("Element at the top of the stack: %d\n", peek());
    printf("Elements:\n");
    while (!isempty())
    {
        printf("%d\n", pop());
    }
    printf("Stack full: %s\n", isfull() ? "true" : "false");
    printf("Stack empty: %s\n", isempty() ? "true" : "false");
    return 0;
}