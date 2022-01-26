#include<stdio.h>
#include<stdlib.h>
#define Max 5

typedef struct stk
{
    int a[Max];
    int top;
     
}stack;

void create_stack(stack*s)
{
    s->top=-1;
}

void push(stack*s,int value)
{
    if(s->top==Max-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {   
        s->top=s->top+1;
        s->a[s->top]=value;
        printf("You Store %d in Stack.",value);
    }
}
int Pop(stack*s)
{
    int store;
    store=s->a[s->top];
    if(s->top==-1)
    {
        printf("\nStack is Underflow or Empty\n");
        return 0;
    }
    else
    {
        s->top=s->top-1;
        return store;
    }
    
}
void Display(stack*s)
{
    
    if(s->top==-1)
    {
        printf("Stack is Underflow or Empty");
    }
    else{
    
    for(int i=0;i<=s->top;i++)
    {
        printf("%d\t",s->a[i]);
}
}
}
int main()
{    stack s;
    int value,y,choice;
    create_stack(&s);
    while(1)
    {
        printf("\nEnter=\n1 For PUSH\n2 For POP\n3 For Display\n4 For Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        
            printf("\nEnter value u want to insert\n");
            scanf("%d",&value);
    
            push(&s,value);
            break;
             
        case 2:
        
            y=Pop(&s);
            printf("\nDeleted Item = %d \n",y);
            break;
        
        
        case 3:
        
            Display(&s);
            break;
            
        case 4:
        
            exit(0);
            
    }
    
   
    }
}


