#include<stdio.h>
void swapByvalue(int a,int b)
{
int c=a;
a=b;
b=c;
}
int main()
{
    int x=10,y=20;
    printf("before the swap x=%d and y=%d\n,x,y");
    swapByvalue(x,y);
    printf("after the swap x=%dand y=%d",x,y);
    return 0;
}