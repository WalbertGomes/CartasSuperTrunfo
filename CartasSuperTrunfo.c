    #include <stdio.h>

    int main(){
        //Dados
        char estado1;
        char codigo1[10];
        char cidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int PontosTuristicos1, opcao, Regras, comparacao;
    
        printf("Menu Principal\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regrar\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:

                //Aqui o usuario ira cadastrar sua carta 
                printf("cadastro da carta 1 \n");
                
                printf("Digite o seu estado (A ao H): ");
                scanf(" %c", &estado1);

                printf("Digite o codigo da carta ex: A01: ");
                scanf("%s", codigo1);

                printf("Digite o nome da cidade: ");
                scanf("%s", cidade1);

                printf("Digite a populacao: ");
                scanf("%lu", &populacao1);

                printf("Digite a area (km²): ");
                scanf("%f", &area1);

                printf("Digite o PIB: ");
                scanf("%f", &pib1);

                printf("Digite a quantidade de pontos turisticos: ");
                scanf("%d", &PontosTuristicos1);

                //aqui sera pra poder imprimir pibpercapita, densidade populacional e superpoder
                float densidade1 = populacao1 / area1;
                float percapita1 = pib1 / populacao1;
                float densidadeInvertida1 = 1 / densidade1;
                float superpoder1 = populacao1 + area1 + pib1 + PontosTuristicos1 + percapita1 + densidadeInvertida1;



                //Aqui sera impresso as informacoes cadastras pelo usuario
                
                printf("---Carta 1 cadastrada--- \n");
                printf("estado: %c\n", estado1 );
                printf("codigo: %s\n", codigo1);
                printf("cidade: %s\n", cidade1);
                printf("populacao: %lu\n", populacao1);
                printf("area: %f km²\n", area1);
                printf("pib: %f \n", pib1);
                printf("Pontosturisticos: %d\n", PontosTuristicos1);
                printf("Densidade populacional: %.2f hab/km²\n", densidade1);
                printf("PIB per capita: %.2f reais\n", percapita1);
                printf("Super poder:  %.2f\n", superpoder1);
                

                //A partir daqui o padrao ira seguir o mesmo da primeira carta

                char estado2;
                char codigo2[10];
                char cidade2[50];
                unsigned long int populacao2;
                float area2;
                float pib2;
                int PontosTuristicos2;

            
                printf("cadastro da carta 2 \n");
                
                printf("Digite o seu estado (A ao H): ");
                scanf(" %c", &estado2);

                printf("Digite o codigo da carta ex: A01: ");
                scanf("%s", codigo2);

                printf("Digite o nome da cidade: ");
                scanf("%s", cidade2);

                printf("Digite a populacao: ");
                scanf("%lu", &populacao2);

                printf("Digite a area (km²): ");
                scanf("%f", &area2);

                printf("Digite o PIB: ");
                scanf("%f", &pib2);

                printf("Digite a quantidade de pontos turisticos: ");
                scanf("%d", &PontosTuristicos2);

                float densidade2 = populacao2 / area2;
                float percapita2 = pib2 / populacao2;
                float densidadeInvertida2 = 1 / densidade2;
                float superpoder2 = populacao2 + area2 + pib2 + PontosTuristicos2 + percapita2 + densidadeInvertida2;




                printf("---Carta 2 cadastrada--- \n");
                printf("estado: %c\n", estado2 );
                printf("codigo: %s\n", codigo2);
                printf("cidade: %s\n", cidade2);
                printf("populacao: %lu\n", populacao2);
                printf("area: %f km²\n", area2);
                printf("pib: %f\n", pib2);
                printf("Pontosturisticos: %d\n", PontosTuristicos2);
                printf("Densidade populacional: %.2f hab/km²\n", densidade2);
                printf("PIB per capita: %.2f reais\n", percapita2);
                printf("Super poder:  %.2f\n", superpoder2);

                
                
                /*
                AQUI FOI USADO PRA IMPRIMIR O RESULTADO DE FORMA BASICA, APENAS COM 0 E 1 PARA DEFINIR O VENCEDOR.
                printf("---RESULTADO FINAL (1 = CARTA1, 0 = CARTA2): ---\n");
                
                printf("Populacao: %d\n", populacao1 > populacao2);
                printf ("Área: %d\n", area1 > area2);
                printf("PIB: %d\n", pib1 > pib2);
                printf("Pontos Turisticos: %d\n", PontosTuristicos1 > PontosTuristicos2);
                printf("Densidade Populacional: %d\n", densidadeInvertida1 > densidadeInvertida2);
                printf("PIB Per Capita: %d\n", percapita1 > percapita2);
                printf("Super Poder: %d\n", superpoder1 > superpoder2); 
                */

                //aqui foi adicionado uma formar melhor de imprimir o resultado para o usuraio, comparando atributo por atributo e defonindo qual carta foi a vencerdora
                //tbm foi ultilizado o switch pro usuario escolher qual atributo comparar
                    printf("Escolha o Atributo Para ser comparado\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Ponto Turístico\n");
                    printf("5. Dendsidade Populacional\n");
                    printf("6. PIB PerCapita\n");
                    printf("7. Super Poder\n");
                    printf("Escolha uma Opção: ");
                    scanf("%d", &opcao);
                 
                  printf("---RESULTADO FINAL---\n");
            
                switch (opcao)
                {
                
                case 1:
                    printf("Comparacao de Cartas (Atributo: Populacao):\n");
                    printf("Carta 1 - %s : %lu\n", cidade1, populacao1);
                    printf("Carta 2 - %s : %lu\n", cidade2, populacao2);
                

                if (populacao1 > populacao2){
                        printf("Carta 1 Venceu!\n"); 
                    }else if(populacao1 < populacao2){
                        printf("Carta 2 Venceu!\n");
                    }else {
                        printf("Houve um empate!\n");
                    }

                    break;

                 case 2:
                printf("Comparacao de Cartas (Atributo: Area):\n");
                printf("Carta 1 - %s : %f\n", cidade1, area1);
                printf("Carta 2 - %s : %f\n", cidade2, area2);
            

                if (area1 > area2){
                    printf("Carta 1 Venceu!\n");
                }else if(area1 < area2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;

                case 3:
                printf("Comparacao de Cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s : %f\n", cidade1, pib1);
                printf("Carta 2 - %s : %f\n", cidade2, pib2);
            

                if (pib1 > pib2){
                    printf("Carta 1 Venceu!\n");
                }else if (pib1 < pib2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;
                
                case 4:
                printf("Comparacao de Cartas (Atributo: Pontos Turisticos):\n");
                printf("Carta 1 - %s : %d\n", cidade1, PontosTuristicos1);
                printf("Carta 2 - %s : %d\n", cidade2, PontosTuristicos2);
            

                if (PontosTuristicos1 > PontosTuristicos2){
                    printf("Carta 1 Venceu!\n");
                }else if(PontosTuristicos1 < PontosTuristicos2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;

                case 5:
                printf("Comparacao de Cartas (Atributo: Densidade Populacional):\n");
                printf("Carta 1 - %s : %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s : %.2f\n", cidade2, densidade2);
            

                if (densidade1 < densidade2){
                    printf("Carta 1 Venceu!\n");
                }else if (densidade1 > densidade2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;


                case 6:
                printf("Comparacao de Cartas (Atributo: PIB Per Capita):\n");
                printf("Carta 1 - %s : %.2f\n", cidade1, percapita1);
                printf("Carta 2 - %s : %.2f\n", cidade2, percapita2);
            

                if (percapita1 > percapita2){
                    printf("Carta 1 Venceu!\n");
                }else if (percapita1 < percapita2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;


                case 7:
                printf("Comparacao de Cartas (Atributo: Super Poder):\n");
                printf("Carta 1 - %s : %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s : %.2f\n", cidade2, superpoder2);
            

                if (superpoder1 > superpoder2){
                    printf("Carta 1 Venceu!\n");
                }else if (superpoder1 < superpoder2){
                    printf("Carta 2 Venceu!\n");
                }else {
                    printf("Houve um empate!\n");
                }
                    break;
                
                default:
                    printf("Opção Inválida");

                

            }
             
            break;
            

        case 2:
            printf("Regras do Jogo: ");
            printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
            scanf("%d", &Regras);
            break;

        case 3:
            printf("Saindo do jogo\n");
            break;

        default:
            printf("Opção Inválida\n");
        
        }


        return 0;

    }