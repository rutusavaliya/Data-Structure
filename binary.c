#include<stdio.h>
int binarysearch(int a[],int x, int n)
{
    int low=0, high=n-1,mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
             return mid+1;

         else if(a[mid]<x)
         low = mid+1;

             else
             high = mid -1;           
    }

      return -1;
}
      int main()
      {
        int a[]={2,4,8,10,19,21,25,30,39,46,50,52,58},x,b;
        int n= sizeof(a)/sizeof (a[0]);
        for(int i=0;i<n;i++)
             printf("%d ",a[i]);
             printf("\n enter serach element :");
             scanf("%d ",&x);
             b= binarysearch (a,x,n);
             if(b<0)

                  printf("element is not found........ ");
                   
             else
                   printf("serach element is found at%d position ",b);      
      }
