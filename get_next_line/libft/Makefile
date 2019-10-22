# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jduffey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 12:30:18 by jduffey           #+#    #+#              #
#    Updated: 2019/06/19 10:52:41 by jduffey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES  = *.c

CFLAGS = -Wall -Werror -Wextra

OBJ = *.o

all: $(NAME)

$(NAME): 
	gcc -c $(CFLAGS) $(FILES)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
