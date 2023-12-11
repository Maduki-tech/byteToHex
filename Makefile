CC=gcc
CFLAGS=-Iinclude -Wall
DEPS = 
OBJ = main.o

%.o: %.c $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


.PHONY: 
	compile_commands

clean:
	rm -f src/*.o a

compile_commands:
	bear -- make

