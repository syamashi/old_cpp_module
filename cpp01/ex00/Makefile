NAME = a.out
SRCS = $(shell echo *.cpp)
OBJDIR = ./obj/
OBJS = $(SRCS:%.cpp=$(OBJDIR)%.o)

CC = clang++ -g -O0
CFLAGS = -Wall -Werror -Wextra

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p obj

$(OBJDIR)%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	@make re -s
	./$(NAME)
	@make fclean -s

val:
	@make re -s
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
	@make fclean -s

.PHONY: all fclean clean re test val