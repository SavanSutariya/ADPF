#include <stdio.h>
int main() {
   int rows, x = 1, space, i, j;
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            x = 1;
         else
            x = x * (i - j + 1) / j;
         printf("%4d", x);
      }
      printf("\n");
   }
   return 0;
}