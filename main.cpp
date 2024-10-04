#include <raylib.h>

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "Hello, World");

  SetTargetFPS(60);

  Rectangle player = {200, 200, 50, 50};
  Camera2D camara = {0};
  camara.target = (Vector2){player.x + 20.0f, player.y + 20.0f};
  camara.offset = (Vector2){screenWidth / 2.0f, screenHeight / 2.0f};
  camara.rotation = 0.0f;
  camara.zoom = 1.0f;

  while (!WindowShouldClose()) {
    if (IsKeyDown(KEY_W))
      player.y -= 10;

    if (IsKeyDown(KEY_S))
      player.y += 10;

    if (IsKeyDown(KEY_A))
      player.x -= 10;

    if (IsKeyDown(KEY_D))
      player.x += 10;

    BeginDrawing();
    BeginMode2D(camara);

    ClearBackground(RAYWHITE);
    DrawRectangleRec(player, GREEN);
    DrawRectangle(10, 10, 10, 10, RED);
    EndMode2D();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
