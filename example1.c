#include<stdio.h>
void fun(int p[])
{
    int n=sizeof(p)/sizeof(int);
    printf("%d",n);
}
int main()
{
    int a[]={10,20,30,40};
    fun(a);

}    