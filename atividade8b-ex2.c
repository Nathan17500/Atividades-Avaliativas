#include "raylib.h"
#include "entidade.h"
#include <stdlib.h>

#define LARGURA_JANELA 800
#define ALTURA_JANELA  600

int main () {
    InitWindow(LARGURA_JANELA, ALTURA_JANELA, "Atividade8b.c");
    SetTargetFPS(60);

    Entidade *jogador = entidadeCriar(ENTIDADE_JOGADOR, (Vector2){ LARGURA_JANELA / 2.0f, ALTURA_JANELA / 2.0f });
    Entidade *inimigo = entidadeCriar(ENTIDADE_INIMIGO, (Vector2){ 200.0f, 300.0f});
    Entidade *item = entidadeCriar(ENTIDADE_ITEM, (Vector2){ 600.0f, 300.0f});

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(WHITE);

            entidadeDesenhar(jogador);
            entidadeDesenhar(inimigo);
            entidadeDesenhar(item);

        EndDrawing();
    }

    free(jogador);
    free(inimigo);
    free(item);

    CloseWindow();

return 0;
}