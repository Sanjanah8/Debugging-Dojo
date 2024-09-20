# include <stdio.h>
# define scanf  "%s Geeks For Geeks "
main()
{
   printf(scanf, scanf);
   getchar();
   return 0;
}


Output: %s Geeks For Geeks Geeks For Geeks 
Explanation: After pre-processing phase of compilation, printf statement will become.
printf("%s Geeks For Geeks ",  "%s Geeks For Geeks ");
