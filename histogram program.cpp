#include <stdio.h>

void printHistogram ( int *hist, int n );
int main() {
   int i, j;
   int inputValue;

   printf("Input the amount of values: \n");  
   scanf("%d", &inputValue);
   int hist[inputValue];

   printf("Input the values between 0 and 9 (separated by space): \n");
   for (i = 0; i < inputValue; ++i) {
    scanf("%d", &hist[i]);  
   }

    int results[10] = {0};

    for (i = 0; i < 10; ++i) {   
      for(j = 0; j < inputValue; j++) {
         if ( hist[j] == i){
            results[i]++;
         }
      } 
   }

    printf("\n");
    printHistogram(hist, 10);

    return 0;
}

void printHistogram(int *hist, int n) {
      int i, j;
      for (i = 0; i < n; i++) {
      printf("[%d] ", i);
      for ( j = 0; j < hist[i]; ++j) {
      printf("*");
      }
      printf("\n");
   }
}
//////this for clone testing now.
