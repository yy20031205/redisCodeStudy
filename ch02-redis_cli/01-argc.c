#include <stdio.h>


int main(int argc, char **argv)
{
   int i;
   
   for(i = 0; i < argc; i++)
   {
      printf("参数[%d]: %s\n", i, argv[i]);
   }

   return 0;
}
