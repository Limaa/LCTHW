all: limpa ex13

limpa:
	rm -f ex13

exs: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13
CFLAGS=-Wall -g
clean:
	rm -f ex1 
	rm -f ex3 
	rm -f ex4
	rm -f ex5
	rm -f ex6
	rm -f ex7
	rm -f ex8
	rm -f ex9
	rm -f ex10
	rm -f ex11
	rm -f ex12
	rm -f ex13
