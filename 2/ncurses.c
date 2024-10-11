#include <ncurses.h>
/*sudo apt-get install libncurses libncurses-dev for install library*/

int main() {
	
	char letter;
	initscr();
	printw("Press any key");
	refresh();
	
	letter = getch();
	clear();
	printw("You pushed: '%c'", letter);
	refresh();

	getch();
	endwin();
	return 0; 
}