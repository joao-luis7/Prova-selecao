#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Critério 1 (Eliminatório): Idade entre 25 e 45 anos (inclusive).
Critério 2 (Eliminatório): Possuir diploma de nível superior ('S' ou 'N').
Critério 3 (Classificatório): Experiência profissional em anos.
Critério 4 (Classificatório): Nota em um teste técnico (0 a 10).
Um candidato só é avaliado nos critérios classificatórios se passar pelos eliminatórios.
A pontuação final é calculada como: (Experiência * 5) + (Nota Teste * 7).
Crie um algoritmo que leia a idade, se possui diploma, os anos de experiência e a nota no teste.
Se o candidato for eliminado por algum critério, mostre "Candidato Eliminado".
Caso contrário, calcule e mostre "Candidato Aprovado com Pontuação: [pontuação]".*/

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
         printf("Você possui diploma nível superior? (S ou N) ");
         scanf("  %c", &diploma);
        if (diploma == 'N' || diploma == 'n'){
            classificado = 'E';
        }
        else{
            printf("Quantos anos você tem de experiência? ");
            scanf("%d", &experiencia);
            printf("Qual foi sua nota no teste técnico? ");
            scanf("%f", &nota);
            classificado = 'A';
        }
        
    }
    if (classificado == 'E'){
        printf("Candidato Eliminado.\n");
    }
    else{
        pontuacao = (experiencia*5)+(nota*7);
        printf("Candidato aprovado! Pontuação final: %.2f\n", pontuacao);
    }

    system("pause");
    return 0;
    
    
}