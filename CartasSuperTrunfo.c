#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio super trunfo paises! \n");
    printf("novo commit\n");


    char Estado[50];
    char Codigo[50];
    char Nome_da_cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_pontos_turisticos;

    printf("Digite seu estado: \n");
    scanf("%s", &Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);

    printf("Digite o numero de populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite quandos pontos turisticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos);





    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
