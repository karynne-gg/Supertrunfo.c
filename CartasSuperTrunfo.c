#include <stdio.h>

int main() {

    //Variaveis

    char Estado1[5], Estado2[5];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int PontosT1, PontosT2;
    float DensidadeP1, DensidadeP2;
    float PibPC1, PibPC2;
    float superpoder1, superpoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    //A seguir dados da carta 1:

    printf("Carta 1:\n");

    printf("Digite a sigla do Estado:\n");
    scanf("%s", &Estado1);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%ld", &Populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosT1);

    DensidadeP1 = Populacao1 / Area1;

    PibPC1 = Pib1 / Populacao1;

    superpoder1 = Populacao1 + Area1 + Pib1 + PontosT1 + PibPC1 + 1/DensidadeP1;

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
    scanf("%ld", &Populacao2);

    printf("digite a área da cidade:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosT2);

    DensidadeP2 = Populacao2 / Area2;

    PibPC2 = Pib2 / Populacao2;

    superpoder2 = Populacao2 + Area2 + Pib2 + PontosT2 + PibPC2 + 1/DensidadeP2;

    printf("\n");

    //Exibição carta 1:

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populção: %ld de habitantes\n", Populacao1);
    printf("Àrea: %.1f km²\n", Area1);
    printf("PIB: %.2f reais\n", Pib1);
    printf("Pontos turísticos: %d\n", PontosT1);
    printf("Densidade populacional: %.1f hab/km²\n", DensidadeP1);
    printf("PIB per capita: %.2f reais\n", PibPC1);
    printf("Superpoder: %.1f\n", superpoder1);
    
    printf("\n");
    //Exibição carta 2:

    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %ld de habitantes\n", Populacao2);
    printf("Àrea: %.1f km²\n", Area2);
    printf("PIB: %.2f reais\n", Pib2);
    printf("Pontos turísticos: %d\n", PontosT2);
    printf("Densidade populacional: %.1f Hab/km²\n", DensidadeP2);
    printf("Pib per capita: %.2f reais\n", PibPC2);
    printf("Superpoder: %.1f\n", superpoder2);

    printf("\n");
    //Comparação:

    resultado1 = Populacao1 > Populacao2;
    resultado2 = Area1 > Area2;
    resultado3 = Pib1 > Pib2;
    resultado4 = PontosT1 > PontosT2;
    resultado5 = DensidadeP1 < DensidadeP2;
    resultado6 = PibPC1 > PibPC2;
    resultado7 = superpoder1 > superpoder2;

    printf("\n");

    //densidade populacional, a carta com o menor valor vence; 
    //os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu (%ld)\n", resultado1);
    printf("Àrea: Carta 1 Venceu (%d)\n", resultado2);
    printf("Pib: Carta 1 Venceu (%d)\n", resultado3);
    printf("Pontos turisticos: Carta 1 Venceu (%d)\n", resultado4);
    printf("densidade populacional: Carta 1 Venceu (%d)\n",resultado5);
    printf("Pib per capita: Carta 1 Venceu (%d)\n", resultado6);
    printf("Superpoder: Carta 1 venceu (%d)\n", resultado7);



    return 0;
}
