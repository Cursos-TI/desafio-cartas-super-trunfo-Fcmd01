#include <stdio.h>  // i/o in e out, entrada e saida de dados, printf, scanf
#include <stdlib.h> // vai emular os comandos do DOS
#include <locale.h> // usar acentos

void main (){
    //Permite usar acentos
    setlocale (LC_ALL, "");


    char estado;
    //inserir nome do estado
    printf ("Digite o nome do Estado: ");

    //scannear um valor para a vari�vel endere�ada no char estado
    scanf ("%c", &estado);

    char codigo;

    printf ("\nDigite c�digo da carta: ");
    fflush (stdin);
    scanf ("%c", &codigo);


    char cidade;

    printf ("\nDigite o nome da Cidade: ");
    fflush (stdin);
    scanf ("%c", &cidade);


    int pop;

    printf("\nDigite a popula��o da Cidade: ");
    fflush (stdin);
    scanf("%d", &pop);

    float area;

    printf("\nDigite a �rea da Cidade: ");
    fflush(stdin);
    scanf("f", &area);

    float pib;

    printf("\nDigite o PIB da Cidade: ");
    fflush(stdin);
    scanf("f", &pib);


    int pontost;

    printf("\nDigite o n�mero de pontos tur�sticos da Cidade: ");
    fflush (stdin);
    scanf("%d", &pontost);

    printf("\nCadastro da cidade concluido!");

}
