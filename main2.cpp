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
#include "actor.h"
#include "projectile.h"
#include "bullet.h"
#include "GameEventHandler.h"


int main() {
	const float		SCREEN_WIDTH = 800.0, SCREEN_HEIGHT = 800.0;
	const float		SCREEN_LEFTEDGE = 0.0, SCREEN_RIGHTEDGE = SCREEN_WIDTH; 
	const float		SCREEN_TOPEDGE = 0.0, SCREEN_BOTTOMEDGE = SCREEN_HEIGHT;
	enum			controlDirection_t { UP, DOWN, LEFT, RIGHT };

	if (!al_init()) {
		al_show_native_message_box(NULL, "Error", NULL, "Failed to initialize Allegro 5!", NULL, NULL);
		return -1;
	}

	al_set_new_display_flags(ALLEGRO_NOFRAME); /**< Screen without frames. */
	ALLEGRO_DISPLAY *display = al_create_display(SCREEN_WIDTH, SCREEN_HEIGHT);
	if (!display) {
		al_show_native_message_box(display, "Error", "Display Settings", "Display window was unsuccessful.", NULL, NULL);
		return -1; /**< Error message in case display couldn't be created. */
	}
	al_set_window_position(display, 100, 100);
	al_set_window_title(display, "2720 Term Project");
}