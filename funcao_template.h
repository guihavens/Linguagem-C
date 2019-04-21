#include<stdio.h>


/********************************LISTAS(TAD)***********************************/
typedef struct lista{
    
    int num;
    *lista l;
}
/********************************ponteiros*************************************/
void ponteiro_duplo(int **x);

void ponteiro_duplo(int **x){
    
    printf("%d\n",**x);
}
