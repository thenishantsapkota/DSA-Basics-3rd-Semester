#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;
void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack is underflow!!" << endl;
    }
    else
    {
        cout << "Popped" << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top < 0)
    {
        cout << "Stack is underflow!";
    }
    else
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
    }
}

int main()
{
    int ch, val;
    cout << "1) Push in stack\n2) Pop from stack\n3) Display Stack\n4) Exit\n";
    do
    {
        cout << "Enter a choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exiting!!" << endl;
            break;
        }

        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 4);
    return 0;
}