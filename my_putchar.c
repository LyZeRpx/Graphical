/*
** EPITECH PROJECT, 2023
** PUTCHZAR
** File description:
** GJB
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
