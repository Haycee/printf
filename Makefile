SRCS =	ft_printf.c \
		utils.c \

LIBFT_AR = ./libft/libft.a

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= GCC
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

${NAME}	:	libft ${OBJS} 
	cp ./libft/libft.a ${NAME}
	ar -crs ${NAME} ${OBJS}

all	: libft ${NAME}

libft :
	make -C ./libft

%.o: %.c ft_printf.h libft./libft.h
	${CC} ${FLAGS} -o $@ -c $<

clean :
	${RM} ${OBJS}
	make clean -C ./libft

fclean : clean
	${RM} ${NAME}
	make fclean -C ./libft
re : fclean all

.PHONY: all clean libft fclean re
