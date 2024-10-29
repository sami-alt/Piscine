
CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = bsq

SRC = ft_*

PRE = src/

OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o: 
	${CC}  ${FLAGS} -c -I ${INCS} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
				${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:	
	rm -rf  ${OBJS}

fclean: clean 
			rm -rf ${NAME}

re: fclean all