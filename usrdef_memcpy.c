#include <stdio.h>
#include<string.h>
#define SIZE 100

void * usr_memcpy(void *dest,void *src ,int n)
{
    char *p1=(char*)src;
    char *p2=(char*)dest;
    for (int i=0;i<n;i++)
    {
        p2[i]=p1[i];
    }
    printf("destination string=%s",p2);
}

int main()
{
    char str[SIZE],dest[SIZE];
    printf("enter source string\n");
    scanf("%s",str);

void* (*fptr)(void *,void * ,int)=usr_memcpy;
fptr(dest,str,strlen(src));

    return 0;
}
