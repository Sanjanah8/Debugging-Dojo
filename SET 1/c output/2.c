#include<stdio.h>
int main()
{
   printf("%x", -1<<1);
   getchar();
   return 0;
}
Output is dependent on the compiler. For 32 bit compiler it would be fffffffe and for 16 bit it would be fffe.
