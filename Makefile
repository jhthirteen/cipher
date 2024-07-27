CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

all: main

main: main.o
	${CC} ${CFLAGS} main.o -o main

main.o:
	${CC} -c main.c

clean:
	rm -f *.o main