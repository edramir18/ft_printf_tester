# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edramire <edramire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 23:40:46 by edramire          #+#    #+#              #
#    Updated: 2020/01/09 13:21:22 by edramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPRINT := ../
NAME = main
CREATE = create_main
FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS)
LIBS := -I $(FTPRINT) -L $(FTPRINT) -l ftprintf
RUN := -D U -D X -D XX -D D -D I -D S -D C -D P -D PC

all: $(NAME)

$(NAME):
	gcc $(CREATE).c -o $(CREATE) $(RUN)
	./$(CREATE) > $(NAME).c
	$(MAKE) -C $(FTPRINT)
	cp $(NAME).c ft_$(NAME).c
	sed -i '' 's/printf(/ft_printf(/g' ft_$(NAME).c
	$(CC) $(NAME).c -o $(NAME) $(LIBS) $(BSD)
	$(CC) ft_$(NAME).c -o ft_$(NAME) $(LIBS) $(BSD)
	./$(NAME) > src.txt
	./ft_$(NAME) > dst.txt

bonus:
	gcc $(CREATE).c -o $(CREATE) -D BONUS $(RUN)
	./$(CREATE) > $(NAME).c
	$(MAKE) -C $(FTPRINT) bonus
	cp $(NAME).c ft_$(NAME).c
	sed -i $(SED) 's/printf(/ft_printf(/g' ft_$(NAME).c
	$(CC) $(NAME).c -o $(NAME) $(LIBS) $(BSD)
	$(CC) ft_$(NAME).c -o ft_$(NAME) $(LIBS) $(BSD)
	./$(NAME) > src.txt
	./ft_$(NAME) > dst.txt

clean:
	rm -rf *.txt
	rm -rf *.out
	rm -rf *.dSYM
	rm -rf ft_*.o

fclean: clean
	$(MAKE) -C $(FTPRINT) $@
	rm -rf $(NAME) ft_$(NAME)
	rm -rf $(NAME).c ft_$(NAME).c
	rm -rf $(CREATE)

re: fclean all
