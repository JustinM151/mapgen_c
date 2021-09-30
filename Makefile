CC=clang

all: mapgen

mapgen:
	$(CC) -o mapgen mapgen.c

clean:
	rm mapgen