#include <stdio.h>

int main()
{
 int data;
 printf("enter data\n");
 scanf("%d",&data);
 printf("before swapping =%d\n",data);
 int a= ((data & 0x0FFFF)<<12);
 int b=  ((data & 0x0FFFF)>>12);
 int c= a|b;
 printf("after swapping =%d\n",c);

    return 0;
}
