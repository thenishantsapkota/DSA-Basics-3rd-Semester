#include <stdio.h>

int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("\nEnter the size of the stack[MAX=100]:");
    scanf("%d", &n);
    printf("\n\tSTACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");

    do
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\tTHANK YOU\n");
            break;
        default:
            printf("\nInvalid choice,Enter Valid Choice(1/2/3/4)");
        }
    } while (choice != 4);
    return 0;
}

void push()
{
    if (top == n - 1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter the element to be pushed:");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("\nStack is empty or underflow");
    }
    else
    {
        printf("\nThe popped element is %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nThe elements in the stack are:");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
        printf("\n Press Next Choice");
    }
}