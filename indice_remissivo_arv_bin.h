typedef struct NO* ArvBin;

ArvBin* cria_ArvBin();

void libera_ArvBin(ArvBin* raiz);

int estaVazia_ArvBin(ArvBin *raiz);

int altura_ArvBin(ArvBin *raiz);

int totalNO_ArvBin(ArvBin * raiz);

void preOrdem_ArvBin(ArvBin *raiz);

void emOrdem_ArvBin(ArvBin *raiz);

void posOrdem_ArvBin(ArvBin *raiz);

int insere_ArvBin(raiz,palavra);

int remove_ArvBin(ArvBin *raiz,string palavra);

int consulta_ArvBin(ArvBin *raiz,string palavra);

