/*
** EPITECH PROJECT, 2022
** main function
** File description:
** main function
*/

#include "my.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Error : You need to put some text in first argument.\n");
        exit(84);
    }
    initscr();
    mvaddstr(15, 60, argv[1]);
    getch();
    endwin();
    
    return 0;
}
