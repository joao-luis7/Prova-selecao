#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crit�rio 1 (Eliminat�rio): Idade entre 25 e 45 anos (inclusive).
Crit�rio 2 (Eliminat�rio): Possuir diploma de n�vel superior ('S' ou 'N').
Crit�rio 3 (Classificat�rio): Experi�ncia profissional em anos.
Crit�rio 4 (Classificat�rio): Nota em um teste t�cnico (0 a 10).
Um candidato s� � avaliado nos crit�rios classificat�rios se passar pelos eliminat�rios.
A pontua��o final � calculada como: (Experi�ncia * 5) + (Nota Teste * 7).
Crie um algoritmo que leia a idade, se possui diploma, os anos de experi�ncia e a nota no teste.
Se o candidato for eliminado por algum crit�rio, mostre "Candidato Eliminado".
Caso contr�rio, calcule e mostre "Candidato Aprovado com Pontua��o: [pontua��o]".*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    int idade, experiencia;
    float nota, pontuacao;
    char diploma, classificado;

    printf("Qual seu idade? ");
    scanf("%d", &idade);
    
    if(idade < 24 || idade > 45){
        classificado = 'E';
    }
    else{
         printf("Voc� possui diploma n�vel superior? (S ou N) ");
         scanf("  %c", &diploma);
        if (diploma == 'N' || diploma == 'n'){
            classificado = 'E';
        }
        else{
            printf("Quantos anos voc� tem de experi�ncia? ");
            scanf("%d", &experiencia);
            printf("Qual foi sua nota no teste t�cnico? ");
            scanf("%f", &nota);
            classificado = 'A';
        }
        
    }
    if (classificado == 'E'){
        printf("Candidato Eliminado.\n");
    }
    else{
        pontuacao = (experiencia*5)+(nota*7);
        printf("Candidato aprovado! Pontua��o final: %.2f\n", pontuacao);
    }

    system("pause");
    return 0;
    
    
}