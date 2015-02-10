#pragma once

#include "GameEngine.h"
#include "Asteroid.h"
#include <SDL_image.h>

// Forward declare SDL_texture
class SDL_texture;

class Game: public GameEngine
{
  friend class GameEngine;

protected:
  Game();
  ~Game();

  void InitializeImpl();
  void UpdateImpl(float dt);
  void DrawImpl(SDL_Renderer *renderer, float dt);
  bool checkCollision(Vector2 asteroid, Vector2 otherObject);

  // The player
  Player _player;
  // The asteroid array default 10
  Asteroid _asteroids[MAXASTEROIDS];
  // 
  SDL_Texture *_tanky;

};