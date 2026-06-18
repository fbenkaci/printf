NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putnbrbase_x_maj.c ft_putchar.c ft_putnbrbase_x.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c ft_modulo_p.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) test

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test

clean:
	rm -rf $(OBJS)

fclean: clean 
	rm -rf $(NAME) test

re: fclean all

.PHONY: all clean fclean re