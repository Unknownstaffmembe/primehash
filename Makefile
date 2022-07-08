.PHONY:
	test

primehash.o: primehash.c primehash.h
	gcc -c primehash.c -O3 -o primehash.o

test: primehash.o
	gcc test.c primehash.o -o test.o
