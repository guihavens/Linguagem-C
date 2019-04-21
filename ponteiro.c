/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "funcao_template.h"

int main()
{
    int a,*b;
    
    a = 5;
    b = &a;
    
    printf("%p\n",&a);//devolve o valor do endereço da variavel a
    
    ponteiro_duplo(&b);//devolve o conteudo da variavel a
    
    return 0;
}
