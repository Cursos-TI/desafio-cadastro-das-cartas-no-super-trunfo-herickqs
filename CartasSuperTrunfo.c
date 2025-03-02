#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

      printf("Digite o estado da Carta 1: \n");
       scanf("%s", &estado);
    
      printf("Digite o codigo da Carta 1: \n");
       scanf("%s", &codigo);

      printf("Digite o nome da cidade da Carta 1: \n");
       scanf("%s", &cidade);

      printf("Digite a populacao da Carta 1: \n");
       scanf("%d", &populacao);

      printf("Digite a area da Carta 1: \n");
       scanf("%f", &area);

      printf("Digite o PIB da Carta 1: \n");
       scanf("%f", &pib);

      printf("Digite o numero de pontos turisticos da Carta 1: \n");
       scanf("%d", &pontos);
            
            char estado2[50];
            char codigo2[50];
            char cidade2[50];
            int populacao2;
            float area2;
            float pib2;
            int pontos2;

                printf("Digite o estado da Carta 2: \n");
                     scanf("%s", &estado2);
   
                printf("Digite o codigo da Carta 2: \n");
                     scanf("%s", &codigo2);

                printf("Digite o nome da cidade da Carta 2: \n");
                     scanf("%s", &cidade2);

                printf("Digite a populacao da Carta 2: \n");
                     scanf("%d", &populacao2);

                printf("Digite a area da Carta 2: \n");
                     scanf("%f", &area2);

                printf("Digite o PIB da Carta 2: \n");
                     scanf("%f", &pib2);

                printf("Digite o numero de pontos turisticos da Carta 2: \n");
                     scanf("%d", &pontos2); 


                          printf("Carta 1:\n");

                          printf("Estado:%s \n", estado );

                          printf("Codigo:%s \n", codigo );

                          printf("Nome da cidade:%s \n", cidade);

                          printf("Populacao:%d \n", populacao);
    
                          printf("Area:%.2f km² \n", area);

                          printf("PIB:%.2f de reais \n", pib);

                          printf("Numero de pontos turisticos:%d \n", pontos);

                               printf("-\n");

                                    printf("Carta 2:\n");

                                    printf("Estado:%s \n", estado2 );

                                    printf("Codigo:%s \n", codigo2 );

                                    printf("Nome da cidade:%s \n", cidade2);

                                    printf("Populacao:%d \n", populacao2);
    
                                    printf("Area:%.2f km² \n", area2);

                                    printf("PIB:%.2f de reais \n", pib2);

                                    printf("Numero de pontos turisticos:%d \n", pontos2);

    return 0;
}
