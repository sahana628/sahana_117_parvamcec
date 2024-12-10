#include<stdio.h>
int main()
{
   int n;
   printf("Enter the Range:");
   scanf("%d",&n);//n=20
   for(int i= n;i>=0;i--)
   { 
     if(i%2!=0)
     printf("%d",i);
   }
    return 0;
}