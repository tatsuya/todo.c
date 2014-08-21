SRC = main.c
OBJ = $(SRC:.c=.o)

main: $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $< -c

clean:
	rm -f *.o main

.PHONY: clean