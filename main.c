#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int matriz[5][5];
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        matriz[i][j] = j;
        printf("%d",matriz[i][j]);
    }
    printf("\n");
   }
   printf("Hello world!\n");
    return 0;
    system("Pause");

}
