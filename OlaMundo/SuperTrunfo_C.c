#include <stdio.h>

    // para rodar o código, use o terminal da bash e digite: ./super_trunfo 
    
    /* Usabilidade github
    ---Primeira vez: 
    abrir git bash, git init (inicia repositório) 
    git add . (adiciona os arquivos para o commit)
    git commit -m "Meu primeiro commit/comentário identificador da alteração realizada" (faz o commit)   
    git branch -M main (cria a branch main, se atentar porque no vs code também precisa estar como main)
    
    conectando com GIthub: Criar repositório no github, copiar o link do repositório, voltar para o terminal e digitar: 
    git remote add origin (link do repositório copiado)
    git push -u origin main (envia o código para o github ´pela primeira vez, depois disso, para enviar as alterações basta 
    usar o comando git push origin main)

    --- Rotina de atualização:
    git add . = adiciona os arquivos para o commit
    git commit -m "Comentário identificador da alteração realizada" = faz o commit
    git push origin main = envia as alterações para o github    
    
    Importante!!!!
    sempre pedir "git status" para verificar o status do repositório, quais arquivos foram modificados, 
    quais estão prontos para o commit, etc.

    sempre se atentar se a pasta que está sendo digitado os comando está correta, para isso usar o comando "pwd" 
    para verificar o caminho da pasta atual, e "ls" para listar os arquivos da pasta atual.
    
    --- Letreiro de comando: 

    Untracked - Arquivo novo; o Git ainda não o conhece. 
    - use git add para começar a monitorar esse arquivo.

    Modified - Arquivo modificado; o Git já o conhece, mas ele foi alterado desde o último commit. 
    - use git add para incluir essas alterações no próximo commit.

    Added - Arquivo adicionado; o Git já o conhece e ele foi incluído no próximo commit. 
    - use git commit para confirmar essas alterações.

    Deleted  - Arquivo deletado; o Git já o conhece, mas ele foi removido desde o último commit. 
    - use git add para incluir essa alteração no próximo commit.

    Renamed - Arquivo renomeado; o Git já o conhece, mas ele foi renomeado desde o último commit. 
    - use git add para incluir essa alteração no próximo commit.


    */

int main()  {
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das cartas	
    // Variáveis
    // Carta 1 

    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* Carta 2 */

    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* Input informações - Carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta:  ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: "); // [^\n] para ler string com espaços
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    /* Input informações - Carta 2 */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

   // Exibir as informações das cartas

    printf("\n=== Carta 1 ===\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

    