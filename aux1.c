/*
** EPITECH PROJECT, 2023
** auxillliary1
** File description:
** lol
*/

#include "my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdbool.h>

void detect_events(bg_t *a, sfEvent event)
{
    while (sfRenderWindow_pollEvent(a->window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(a->window);
        }
    }
}

int description()
{
    my_putstr("My_radar is a simulation of planes flying");
    my_putstr(" from a point A to a point B.\n");
    my_putstr("When a collision between two planes happens,");
    my_putstr(" both get destructed ");
    my_putstr("unless they are into the area of a control tower.\n");
    return 0;
}

void destroy_all(bg_t *bg)
{
    sfSprite_destroy(bg->bg_sprite);
    sfTexture_destroy(bg->bg_texture);
    sfRenderWindow_destroy(bg->window);
}
