#include <stdio.h>

int main() {

    //Variaveis

    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int PontosT1, PontosT2;

    //A seguir dados da carta 1:

    printf("Carta 1:\n");

    printf("Digite a sigla do Estado:\n");
    scanf("%s", &Estado1);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosT1);

    printf("\n");

    //A seguir dados da carta 2:

    printf("Carta2:\n");

    printf("digite a sigla do Estado:\n");
    scanf("%s", &Estado2);

    printf("digite o codigo da cidade:\n");
    scanf("%s", &Codigo2);

    printf("digite o nome da cidade:\n");
    scanf("%s", &Cidade2);

    printf("digite o número de habitantes da cidade:\n");
    scanf("%d", &Populacao2);

    printf("digite a área da cidade:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosT2);

    printf("\n");

    //Exibição carta 1:

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populção: %d de habitantes\n", Populacao1);
    printf("Àrea: %.1f km²\n", Area1);
    printf("PIB: %.2f \n", Pib1);
    printf("Pontos turísticos: %d\n", PontosT1);
    
    printf("\n");
    //Exibição carta 2:

    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("Populção: %d de habitantes\n", Populacao2);
    printf("Àrea: %.1f km²\n", Area2);
    printf("PIB: %.2f \n", Pib2);
    printf("Pontos turísticos: %d\n", PontosT2);


    return 0;
}
