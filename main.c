#include <stdio.h>    

int main (){


int a =5;
char b='c';


int *p=&a;
char *pb=&b;

printf("%p\n",*p);


printf("Rozmiar int to: %d bajty\n",sizeof(int));
printf("Rozmiar int to: %d bajty\n",sizeof(int));



printf("%d\n",p+2);


/* 
printf("%p\n",*pb);

printf("%c\n",*pb);
 */

    return 0;
}

