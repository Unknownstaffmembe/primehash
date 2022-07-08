#ifndef PRIMEHASH_INCLUDED
#define PRIMEHASH_INCLUDED
/*
 * Prime Hash:
 * NOTE: this isn't a cryptographic hash.
 * Prime hash uses prime numbers to hash an array of bytes (a string),
 * each 8 bit character can be mapped to a prime number and,
 * this prime number is multiplied the "running digest", the digest
 * is just multiplied by primes until the end of an array.
 * The initial digest is just one, for really large hash maps,
 * you may want to change this to a large prime number,
 * you could always use "BIGPRIME" which is defined in primehash.c.
 *
 * hash(char *str) returns a struct, this contains a digest and a
 * "xor signature" (just used in the event of a collision which is
 * pretty rare), the chance of a xor signature and digest colliding
 * is extremely small and, the xor signature is used to determine whether
 * the digest will be odd or even.
*/

// struct prototypes
struct phash;

// struct definitions
struct phash {
	unsigned long int dig; // digest
	char xorsig; // xor signature
};

// function prototypes
extern struct phash hash(char *str);

#endif
