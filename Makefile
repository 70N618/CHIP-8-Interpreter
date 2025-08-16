NAME = c8

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -g -gdwarf-4

SRC_DIR = srcs
OBJ_DIR = objs

SRC = srcs/c8.c \
	  srcs/font.c \


OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o:%.c
	$(CC) $(SRC) $(CFLAGS)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
