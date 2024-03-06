#include <stdio.h> 
int main ()
{
   int eta; 
   printf("inserisci il tuo anno di nascita\n");
   scanf("%d", &eta); 

   if (eta>1969) 
    { 
    printf("nato dopo lo sbarco sulla luna\n"); 
    }
   
     else if (eta==1969)
     {
     printf ("nato lo stesso anno\n");
     }
   
     else if  (eta<1969)
    {
      printf ("nato prima dello sbarco sulla luna\n"); 
    }

}