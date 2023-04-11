#include<stdio.h>
#include<stdlib.h>
int linearsearch (int a[],int x)
{
    for(int i=0;i<10;i++)
    {
        if(a[i]==x)
        return i+1;
    }

         return -1; 
}
     int main()
     {
        int a[15],x,b;
        for(int i=0;i<10;i++)
            a[i]=rand ()%50+1;
        for(int i=0;i<10;i++)
            printf("%d",a[i]);
        printf("\n enter search element :");
        scanf("%d",&x);
        b= linearsearch(a,x);
        if(b>0)
        printf("serach element is found at %d position ",b);
        else
             printf("element is not found ....");        
     }

