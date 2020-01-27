#include <allegro5\allegro.h>
#include<allegro5/allegro_primitives.h>
#include<math.h>

int main() {
	al_init(); //sets up allegro
	al_init_primitives_addon(); //sets up shapes library

	ALLEGRO_DISPLAY* display = al_create_display(500, 500); //makes game screen
	int xpos, xpos2, xpos3; //x-coordinates
	int ypos, ypos2, ypos3; //y-coordinates
	double alpha=1; //angle

	while (1) { //game loop******************************************************

		//physics section/////////////////////////////////////
		alpha += .001;//increase angle

		xpos = 100 * sin(alpha) + 250;
		ypos = 100 * cos(alpha) + 250;

		xpos2 = 100 * sin(alpha + (2 * 3.14 / 3)) + 250;
		ypos2 = 100 * cos(alpha + (2 * 3.14 / 3)) + 250;


		//render section////////////////////////////////////
		al_clear_to_color(al_map_rgb(0, 0, 0)); //wipe screen black
		al_draw_filled_circle(xpos, ypos, 5, al_map_rgb(250, 250, 100));
		al_draw_filled_circle(xpos2, ypos2, 5, al_map_rgb(250, 250, 100));

		al_flip_display();
	}//end game loop***********************************************************


	al_destroy_display(display); //clear up memory
}
