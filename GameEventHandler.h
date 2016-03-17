/**
*		@file	GameEventHandler.cpp
*		@brief	Handlers to run the game event loop.
*
*				Handles game event looping and resolution,
*				once a stage has been loaded.
*
*		@author	Tyler Bertram
*		@bug	No known bugs (uncompiled, untested).
*/

//Includes
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <iostream>

//Player action handler and helper functions
bool CheckIfPlayerAlive();
CheckForKeypress();
MovePlayer();
HandlePlayerActor();

//Computer actor handler and helper functions
bool CheckActiveEnemyActors();
MoveEnemyActors();
CheckProjectileFiring();
HandleEnemyActors();

//Projectile handler - collision detection + resolution go here
bool CheckActiveProjectiles();
CheckForCollisions();
ResolveCollisions();
MoveProjectiles();
HandleProjectiles();

//Bitmap drawing here
DrawObjects();

//Main event handler sequence
EndGamePlayerEscape();
EndGamePlayerDead();
HandleGameLoop();