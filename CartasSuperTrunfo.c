#include <stdio.h>



int main(){

    char state [20];

    char codigo [20];

    char cidade [20];

    int Populacao;

    float area;

    float PIB;

    int PontosTuristicos;



    // Titulo do jogo

    printf("Desafio SUPER TRUNFO!\n");

//Dicas de instrucoes

    printf("Siga as instrucoes abaixo para inserir os dados:\n");

//Primeira carta

    printf("CARTA 01:\n");

//Primeiro Estado

    printf("Digite o estado da cidade:\n");

   

    scanf(" %s", state);

//codigo da Carta

    printf("Digite o codigo:\n");

    scanf("%s", codigo);



    // Cidade 1

    printf("Digite o nome da cidade:\n");



    scanf("%s", cidade);



//população 1

    printf("Digite o numero de habitantes:\n");



    scanf("%d", &Populacao);



//Área 1

    printf("Digite a Área em m^2:\n");



    scanf("%f", &area);

// PIB 1

    printf("Digite o PIB: \n");



    scanf("%f", &PIB);



// Numeros de Pontos turísticos 1

    printf("Digite a quantidade de pontos turisticos:\n");



    scanf("%d", &PontosTuristicos);


//Resultado da Carta criada

    printf("Carta 1 confeccionada!\n");



    printf("Estado: %s\n", state);



    printf("Codigo: %s\n", codigo);



    printf("Cidade: %s\n", cidade);



    printf("Populacao: %d\n", Populacao);



    printf("Área: %f\n", area);



    printf("PIB: %f\n", PIB);



    printf("Pontos turisticos: %d\n", PontosTuristicos);



    return 0;

}