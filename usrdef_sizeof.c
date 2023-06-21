#include <stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
int main()
{
   int x = 10;
   char y = 'f';
   double z = 254748.23;
   printf("size of x: %d", my_sizeof(x));
   printf("size of y: %d", my_sizeof(y));
   printf("size of z: %d", my_sizeof(z));
}

