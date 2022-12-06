#include <stdio.h>

int main()
{
   int nbr;

   printf("tapez un entier:\n");
   scanf("%d", &nbr);

   if (nbr % 8 == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");

   return 1;
}
