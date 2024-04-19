/******************************************************************************

Uma determinada disciplina possui apenas 3 avaliações: 
o trabalho (que vale 10% da nota), 
a prova (que vale 60% da nota) e o 
teste (que vale 30% da nota). 
Crie um programa que pede para o usuário digitar as notas que ele tirou nestas avaliações e imprime na tela a nota final do aluno.


*******************************************************************************/
#include <stdio.h>

int main() {
    float trabalho, prova, teste, nota_final;

    printf("Nota do trabalho (de 0 a 10): ");
    scanf("%f", &trabalho);
    printf("Nota da prova (de 0 a 10): ");
    scanf("%f", &prova);
    printf("Nota do teste (de 0 a 10): ");
    scanf("%f", &teste);

    nota_final = trabalho * 0.1 + prova * 0.6 + teste * 0.3;

    printf("A nota final do aluno é: %.2f\n", nota_final);

    return 0;
}
