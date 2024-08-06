# Makefile for readline.
readline: readline.c
	cc readline.c -o bin/readline

clean:
	rm -f bin/readline