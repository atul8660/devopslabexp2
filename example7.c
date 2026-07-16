#include<stdio.h>
int func(int (*ptr)[2])
{
    **ptr+=1;
    ptr++;
    **ptr*=3;
}
int main()
{
    int arr[2][2]={0,1,2,3};
    func(arr);
    printf("%d %d %d %d",arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
}