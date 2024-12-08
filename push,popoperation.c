#include<stdio.h>
#include<conio.h>
int stack[3],size=3,top=-1;
void push(int d){
    if(top == size-1)
    printf("OVERFLOW/n");
    else
    stack[++top]=d;
}

int pop()
{
    int i;
    if(top==-1)
    {
        printf("UNDERFLOW/n");
        return -1;
    }
    else
    {
        i=stack[top];
        top--;
        return i;
    }
}
int main()
{
    push(3);
    push(9);
    push(6);
    push(4);
    printf("poped element is=%d/n",pop());
    printf("poped element is=%d/n",pop());
}