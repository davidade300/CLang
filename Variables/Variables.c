#include <stdio.h>
#include <string.h>


int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50]; //array tam 50

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva"); //atribuicao de valor literal entre aspas a variavel do tipo array de char
    //strcpy faz parte da lib <string.h>

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos \n", nome, genero, salario, idade);
    
    return 0;
}