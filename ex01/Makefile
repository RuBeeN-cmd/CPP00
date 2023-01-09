_END="\033[0m"
_RED="\033[0;31m"
_GREEN="\033[0;32m"
_YELLOW="\033[0;33m"
_CYAN="\033[0;36m"

SRC_DIR = src
OBJ_DIR = obj
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Contact.cpp Phonebook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(_GREEN)Compiling $(OBJ)...$(END)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	@echo $(_CYAN)Compiling $<...$(END)
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo $(_YELLOW)Cleaning $(OBJ)...$(END)
	@rm -f $(OBJ)

fclean: clean
	@echo $(_RED)Cleaning $(NAME)...$(END)
	@rm -f $(NAME)

re: fclean all