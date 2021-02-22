#include <stdio.h>
#include <stdlib.h>

int main()
{
    ArvBin* raiz;
    ArvBin* raiz = cria_ArvBin();

    int i,N;
    scanf("%d\n",&N);
    int V[N];
    for(i=0;i<N;i++){
        scanf("%s\n",&V[i]);
        insere_ArvBin(raiz, V[i]);
    }

    FILE *pont_arq;
    pont_arq = fopen("arquivo.txt", "r+a");

    if (pont_arq == NULL){
    printf("ERRO! O arquivo não foi aberto!\n");
    }
    else{
     printf("O arquivo foi aberto com sucesso!");
    }

    int M,j;
    scanf("%d\n", &M);
    int A[M];
    for(j=0;j<M;j++){
        scanf("%s\n",&A[j]);
        fprintf(pont_arq, "%s", A[i]);
    }

    fclose(pont_arq);

    return 0;
}
