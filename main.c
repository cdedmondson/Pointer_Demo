#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

/*
 * This program demonstrates concept of pointer.
 */


int main() {

    /*
     *                        Memory
     *                   -------------------
     * Address: 204 ---->|   a = empty     |
     *                   -------------------
     *
     *                   -------------------
     * Address: 64  ---->|   *p = empty    |
     *                   -------------------
     */
    int a;  // Create address with empty memory location to hold value of an integer
    int *p; // Create address with empty memory location to hold address of an integer

    /*
     *                        Memory
     *                   -------------------
     * Address: 204 ---->|   a = 5         |
     *                   -------------------
     *                          ^
     *                          |
     *                   -------------------
     * Address: 64  ---->|   p = 204       |
     *                   -------------------
     */
    a = 5;  // Store integer value of "5" in "a's" memory location
    p = &a; // Store "a's" address in "p" memory location, now "p" points to the value stored in "a's" memory location

    printf("%s%p\n", "Address of 'p':        ", &p); // Prints address of "*p"
    printf("%s%p\n", "Address stored in 'p': ", p);  // Prints address stored in "p" p = 204
    printf("%s%p\n", "Address of 'a':        ", &a); // Prints address of "a"
    printf("%s%d\n", "Value stored in 'a':   ", *p); // Prints value stored in "a" 5

    a = a * 2;    // a=10

    printf("%s%d", "Value stored in 'a':   ", *p);   // a=10

    return 0;
}




