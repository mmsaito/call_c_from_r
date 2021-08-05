#include<stdio.h>
void print_int(int xs[])
{
   int i;
   for (i = 0; i < 5; i++) 
     printf("%d ", xs[i]);
   xs[0] =  -2147483648;
}

void print_real(double xs[])
{
   int i;
   for (i = 0; i < 5; i++) 
     printf("%g ", xs[i]);
}

void set_string(char *xs[])
{
  // printf("xs[0]:%p, xs[1]:%p\n", xs[0], xs[1]);
  printf("xs[0]:%s, xs[1]:%s\n", xs[0], xs[1]);
  sprintf(xs[0], "%s", "XYZ");
} 

