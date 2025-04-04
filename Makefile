CC = clang
CFLAGS = -Wall -g
LDFLAGS = -lncurses

SRC = main.c

EXEC = main

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(SRC) -o $(EXEC) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(EXEC)

rebuild: clean all
