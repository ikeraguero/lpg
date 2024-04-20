#include <stdio.h>


/*A matriz deve ser inicializada com zeros, indicando que está vazia. O zero, portanto, não é considerado como
um valor válido ✅*/ 

void init_matriz(int m, int n, int matriz[m][n]) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            matriz[i][j] = 0;
        }
    }
}

/*Além da matriz, o programa deve utilizar um contador para registrar quantidade de conjuntos. Portanto, o
contador também deve estar zerado ao início do programa. ✅*/

void init_contador(int contador) {
    contador = 0;
}



int main() {

    // Definindo dimensões da matriz
    int m =10, n=10;
    int conjuntos[m][n];
    int contador;

    init_matriz(m, n, conjuntos);
    init_contador(contador);

    printf("======================================\n");
    printf("Bem-vindo ao Gerenciador de Conjuntos!\n");
    printf("======================================\n");
    printf("\n");
    printf("Selecione a opção que deseja: \n");
    printf("\n");
    printf("[1] - Criar um novo conjunto vazio \n");
    printf("[2] - Inserir dados em um conjunto \n");
    printf("[3] - Remover um conjunto \n");
    printf("[4] - Fazer união entre dois conjuntos \n");
    printf("[5] - Fazer a intersecção entre dois conjuntos \n");
    printf("[6] - Mostrar um conjunto \n");
    printf("[7] - Mostrar todos os conjuntos \n");
    printf("[8] - Buscar por um valor \n");
    printf("[9] - Sair do programa \n");






}