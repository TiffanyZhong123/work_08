all: main.o sieve.o
	gcc -o sieve main.o sieve.o -lm

main.o: main.c sieve.h
	gcc -c main.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./sieve
clean:
	rm sieve
	rm *.o
