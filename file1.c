#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("1.txt","w");
    if(fp==NULL)
    {
        printf("File not created");
        return 0;
    }
    fprintf(fp,"Hello World");
    fclose(fp);
}