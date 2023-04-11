#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        a[i]=rand()%50+1;
    }
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
}