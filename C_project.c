#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
  {
   int guess,generate,guesnum=1;
   srand(time(0));
   generate = rand()%100 +1;  // generate random num btw 1-100

   printf("The number is %d\n",generate);
  
   do {
      printf("Guess the number between 1-100 \n");
      scanf("%d",&guess);
      if(guess > generate)
         {
           printf("Try Again! Number is too lower \n");
         }
      else if(guess < generate){
        printf("Try Again! Number is too higher \n"); }
      else
         {
            printf("Well Done! Your guess attempts %d is correct. \n",guesnum);
         }
         guesnum++;
   }while(guess != generate);
   return 0;
  }
     


































































