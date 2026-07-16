#include<stdio.h>
void fun(int *);
int main()
{
    int a[4]={10,20,30,40};

    printf("%d",&a);
    // fun(a+1);
    // printf("%d%d",a[0],a[2]);
}

void fun(int *p)
{
    ++p;
    ++*p;
}