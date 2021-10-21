//calcula Digitos CPF

#include    <stdio.h>
#include    <locale.h>

int vetor[11];
int d1=0,d2=0;
int x = 0;

void    main(){
    printf("Informe os 9 primeiros digitos do CPF: ");
    for(x=0;x<10;x++)
        vetor[x] = getchar()-48;

    //calcula digito1 (d1)
    for(x=10;x>=2;x--)
        d1 = d1 + vetor[10-x]*x;

    d1 = d1%11;
    if((d1==1) || (d1==0))
        d1 = 0;
    else
        d1 = 11-d1;

    vetor[9] = d1;

    //calcula digito2 (d2)
    for(x=11;x>=2;x--)
        d2 = d2 + vetor[11-x]*x;

    d2 = d2%11;
    if((d2==1) || (d2==0))
        d2 = 0;
    else
        d2 = 11-d2;

    vetor[10] = d2;

    printf("primeiro digito = %i\n",d1);
    printf("segundo digito = %i\n",d2);
}
