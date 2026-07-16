#include<stdio.h>
void fun(int *);
int main()
{
    int a[4]={10,20,30,40};
    fun(a);
    printf("%d %d",a[0],a[2]);
}

void fun(int *p)
{
    *p++;
    
}