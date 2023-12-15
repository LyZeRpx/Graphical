/*
** EPITECH PROJECT, 2023
** HEADER
** File description:
** HEADER
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#ifndef MY_H
    #define MY_H

typedef struct entity_s {
    sfSprite *plane_sprite;
    sfSprite *tower_sprite;
    sfIntRect plane_hitbox;
    sfTexture *plane_texture;
    sfTexture *tower_texture;
    sfVector2f plane_pos;
} entity_t;

typedef struct bg_s {
    sfSprite *bg_sprite;
    sfTexture *bg_texture;
    sfRenderWindow *window;
} bg_t;

typedef struct tool_s {
    sfEvent event;
    sfMusic *music;
    sfText *text;
    sfFont *font;
    sfVideoMode mode;
}tool_t;

void destroy_all(bg_t *bg);
int description(void);
int conditions(const char *A, ...);
void my_putchar(char c);
int my_isneg(int nb);
int my_putnbr(int nb);
int my_putnbr_base(int nb, char *str);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
bool my_strcmp(char const *s1, char const *s2);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void detect_events(bg_t *ptr, sfEvent event);

#endif /* MY_H */
