#include<stdio.h>
#define STACKSIZE 4

struct stack
{
    int top;
    int item[STACKSIZE];
}s;

void push(struct stack*,int);
int pop(struct stack *);
int empty(struct stack *);

void push(struct stack *ps,int x)
{
    if (ps->top==STACKSIZE-1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }
    ++ps->top;
    ps->item[ps->top]=x;
}

int pop(struct stack *ps)
{
    int x;
    if(empty(ps))
    {
        printf("STACK UNDERFLOW\n");
        return 0;
    }
    x=ps->item[ps->top];
    ps->top--;
    return x;
}

int empty(struct stack *ps)
{
    if(ps->top==-1)
        return(1);
    else    
        return(0);
}

int main()
{
    int a,n,i;
    s.top=-1;
    push(&s,10);
    push(&s,20);
    push(&s,5);
    printf("Enter no. of values to pop\n");
    scanf("%d",&n);
    printf("Popped values are:\n");
    for(i=0; i<n; i++)
    {
        a=pop(&s);
        printf("%d",a);
    }
}