/* output.c */
#include<stdio.h>
int main()
{
    int i,j;
    float x,y;
    i=79;
    j=20;
    x=211.11f;
    y=3123.132f;

    printf("i=%d,j=%d,x=%f,y=%f\n",i,j,x,y);
    printf("|%d|%5d|%-5d|%5.4d|\n",i,i,i,i);
    printf("|%11.2f|%11.2e|%-11.2g|\n",x,x,x);
    printf("|%o|%5x|%-5o|\n",i,i,i);
    return 0;
}