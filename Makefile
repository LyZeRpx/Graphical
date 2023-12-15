##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

SRC 	= my_radar.c	\
	  aux1.c	\
	  my_putchar.c	\
	  my_putstr.c	\

NAME	=	my_radar
all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(SRC) -l csfml-window -l csfml-graphics -l csfml-system
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

erase: fclean
	clear
redo: re
	clear
code:
	clear
	coding-style . .
	cat coding-style-reports.log
mem:
	valgrind ./$(NAME)
