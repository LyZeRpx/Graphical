/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** ctrl tower sim
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

sfRenderWindow *create_window(bg_t *ptr)
{
    sfVideoMode mode = {1920, 1080, 32};

    ptr->window = sfRenderWindow_create(mode, "My_radar",
    sfResize | sfClose, NULL);
    return ptr->window;
}

void *set_bg(bg_t *bg)
{
    bg->bg_texture = sfTexture_createFromFile("worldmap.jpg", NULL);
    bg->bg_sprite = sfSprite_create();
    sfSprite_setTexture(bg->bg_sprite, bg->bg_texture, sfTrue);
}

void refresh_screen(bg_t *bg)
{
    sfRenderWindow_clear(bg->window, sfBlack);
    sfRenderWindow_drawSprite(bg->window, bg->bg_sprite, NULL);
    sfRenderWindow_display(bg->window);
}

void game_loop(bg_t *bg, tool_t *tool)
{
    bg->window = create_window(bg);
    set_bg(bg);
    while (sfRenderWindow_isOpen(bg->window)) {
        detect_events(bg, tool->event);
        refresh_screen(bg);
    }
    destroy_all(bg);
}

int main(int ac, char **av)
{
    bg_t *bg;
    tool_t *tool;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        description();
        return 0;
    } else {
        game_loop(bg, tool);
    return 0;
    }
}
