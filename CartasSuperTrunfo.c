#include <stdio.h>

// Desafio Cadastro Super Trunfo - Países
//Adicionado estrutura de repetição aprendido em outra aula para otimizar a repetição da segunda carta

//Estrutura da carta
struct Carta {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    struct Carta cartas[2];
    
    // --- Cadastro das Cartas ---

        printf("\n --- Seja Bem vindo ao jogo Super Trunfo de Cidades! --- \n");

    for (int i = 0; i < 2; i++) {
        
        printf("\n --- Inicie o codigo como no exemplo: A01 para carta 01 e A02 para carta 02. --- \n");
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        
        printf("Digite o código da Cidade: ");
        scanf("%d", &cartas[i].codigo);

        while (getchar() != '\n'); 

        printf("Digite o nome da Cidade: ");
        scanf("%[^\n]", cartas[i].nome); 

        printf("Digite o número da população: ");
        scanf("%d", &cartas[i].populacao);

        printf("Digite a área em km²: ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    printf("\n\n========================================\n");
    printf("  EXIBINDO AS 2 CARTAS CADASTRADAS");
    printf("\n========================================\n");

    // --- Dados da Carta Cadastrada ---

    for (int i = 0; i < 2; i++) {
        printf("\n------------------------------------\n");
        printf("      CARTA SUPER TRUNFO %d\n", i + 1);
        printf("------------------------------------\n");
        printf("Código: %d\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nome);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: $(Reais) %.2f \n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("------------------------------------\n");
    }

    return 0;
}