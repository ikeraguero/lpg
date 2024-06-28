#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    char nome[50];
    char nacionalidade[20];
} Artista;

typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;


typedef struct {
    char nome[50];
    int duracao;
    char estilo[20];
    Artista artista;
    Data data;
    int removido;
} Musica;

Musica *musicas = NULL;
int total_musicas = 0;

void adicionar_musica() {
    Musica musica;
    printf("Nome da música: ");
    scanf(" %[^\n]", musica.nome);

    for (int i=0; i<total_musicas; i++) {
        if(!strcmp(musica.nome, musicas[i].nome)) {
            printf("Erro! Música já está registrada!\n");
            return;
        }
    }

    printf("Duração (segundos): ");
    scanf("%d", &musica.duracao);
    printf("Estilo: ");
    scanf(" %[^\n]", musica.estilo);
    printf("Nome do artista: ");
    scanf(" %[^\n]", musica.artista.nome);
    printf("Nacionalidade do artista: ");
    scanf(" %[^\n]", musica.artista.nacionalidade);
    printf("Data de cadastramento (dd mm aaaa): ");
    scanf("%d %d %d", &musica.data.dia, &musica.data.mes, &musica.data.ano);
    musica.removido = 0;

    musicas = (Musica *)realloc(musicas, (total_musicas + 1) * sizeof(Musica));
    musicas[total_musicas] = musica;
    total_musicas++;
}

void remover_musica() {
    char remover[50];
    printf("Qual registro deve ser apagado? (nome da música): ");
    scanf(" %[^\n]", remover);

    for (int i=0; i<total_musicas; i++) {
        if(strcmp(remover, musicas[i].nome)) {
            musicas[i].removido = 1;
            return;
        }
    }

    total_musicas--;
    musicas = (Musica *)realloc(musicas, (total_musicas) * sizeof(Musica));
}

void listar_musicas() {
    printf("Listar\n");
}

void consultar_musica(){
    printf("Consultar\n");
}

int main() {
    int opcao = 0;
    sleep(1.5);
    do {
        printf("======================================\n");
        printf("Bem-vindo ao Gerenciador de Músicas\n");
        printf("======================================\n");
        printf("\n");
        printf("[1] - Inserir música \n");
        printf("[2] - Remover música \n");
        printf("[3] - Listar músicas \n");
        printf("[4] - Consultar músicas \n");
        printf("\n");
        printf("Selecione a opção que deseja: ");
        scanf("%d", &opcao);
        printf("\n");

    } while (opcao <= 0 || opcao > 4);

    if(opcao==1) {
        adicionar_musica();
        main();
    }
    if(opcao==2) {
        remover_musica();
        main();
    }
    if(opcao==3) {
        listar_musicas();
        main();
    }
    if(opcao==4) {
        consultar_musica();
        main();
    }
}