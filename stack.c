#include <stdio.h>
#define n 5
int a[n], i;
int top = -1;

void display()
{
    for (i = 0; i <= top; i++)
        printf("%d ",a[i]);
    printf("\n");
}

void insertfirst(int val)
{
    if (top >= n - 1)
        printf(" array is full\n");
    else
    {
        for(int i=n-1;i>=0;i--)
        a[i]=a[i-1];
        a[top] = val;
        top++;
    }
}
void insertend(int z)
{
    if (top <= n - 1)
        printf(" first element");
    else
    {
           top++;
    }
}
void deleteend()
{
    if (top == -1)
        printf(" array is full\n");
    else
        top--;
}

void deletefirst()
{
    if (top == -1)
       printf("array is alredy empty\n");
        
    else
    {
        printf("deleted element is:%d\n",a[0]); 
        for(int i=0;i<n;i++)
           a[i]= a[i+1];
              top--;
    }
        
}

int main()
{
    int x, ch;
    printf("1. insert element at last position");
    printf("\n2. delete element at last position");
    printf("\n9. display array");
    printf("\n0.exit\n");

    while (ch != 0)
    {
        printf("enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf(" enter your element:");
            scanf("%d", &x);
            insertend(x);
            break;

        case 2:
            printf(" enter your element:");
            scanf("%d", &x);
            insertfirst(x);
            break;    

        case 4:
            deleteend();
            break;

        case 5:
            deletefirst();
            break;    

        case 9:
            display();
            break;

        case 0:
            break;
        default:
            printf(" wrong choice......");
            break;
        }
    }
}