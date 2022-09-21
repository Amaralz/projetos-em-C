#include <stdio.h>
#include <stdlib.h>

void calculo ()
{
    float av1t,av2t,media,av1p,av2p;
    printf("<========== AV1 ==========>\n");
    printf("valor da av1(teorica):");
    scanf("%f",&av1t);

    printf("\n");

    printf("valor da av1(pratica):");
    scanf("%f",&av1p);

    printf("\n<========== AV2 ==========>\n");
    
    printf("valor da av2(teorica):");
    scanf("%f",&av2t);

    printf("\n");

    printf("valor da av2(pratica):");
    scanf("%f",&av1p);
    
    media = ((av1t * 0.6) + (av1p * 0.4)) + ((av2t * 0.6) + (av2p * 0.4));
    
    if (media >= 140)
    {
        system("CLS");   
        printf("\nvoce passou dessa materia da disgriba uhull!!\n\n");
        printf("sua nota na media foi:%.1f\n\n",media);

    } else
    {
        system("CLS");
        float media2 = 140 - media;
        printf("\ndisgriba, voce perdeu :c\ttente estudar mais na proxima ;)\n\n");
        printf("sua nota na media foi:%.1f\n\n",media);
        printf("faltam:%.1f pontos\n\n",media2);
    }
}
int main ()
{
    calculo();
    return 0;
}