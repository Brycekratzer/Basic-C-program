#include <stdio.h>

/**
 * The following code draws half an arrow pointing down based on user input
 * @author brycekratzer
*/
int main(void) {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   printf("Enter arrow base height:\n");
   if(scanf("%d", &arrowBaseHeight) != 1) {
      printf("Error: Unrecognized input, please enter only integer values.");//error handling for invalid input
      return -1;
   }
   
   printf("Enter arrow base width:\n");
   if(scanf("%d", &arrowBaseWidth) != 1) {
      printf("Error: Unrecognized input, please enter only integer values.");
      return -1;
   }
   
   printf("Enter arrow head width:\n");
   if(scanf("%d", &arrowHeadWidth) != 1) {
      printf("Error: Unrecognized input, please enter only integer values.");
      return -1;
   }

   while (arrowHeadWidth <= arrowBaseWidth) {
      printf("Please enter arrow head width that is bigger than arrow base width: ");
      scanf("%d", &arrowHeadWidth);
      printf("\n");
   }

   printf("\n");
   
   // Draw arrow base
   for(int i = 0; i < arrowBaseHeight; i++) {
      for(int j = 0; j < arrowBaseWidth; j++) {
         printf("*");
      }
      printf("\n");
   }
   
   // Draw arrow head
   for(int i = 0; i < arrowHeadWidth; i++ ) {
      for(int j = 0; j < (arrowHeadWidth - i); j++) {
         printf("*");
      }
      printf("\n");
   } 
   return 0;
}