#include <limits.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include "parking.h"
#include "hashdb.h"

#ifndef MYFREETICKETS
TODO(USING THE SOLUTION freetickets.c NOT MY CODE)
#else

/*
 * freetickets
 *      tears down the database freeing all allocated memory
 *      count the number of tickets freed in the database and
 *      print it out before returning
 *
 *      unsigned long cnt = 0UL
 *      printf("Total tickets freed: %lu\n", cnt);
 */
void
freetickets(void)
{
    unsigned long cnt = 0UL;

    /*
     * walk down each chain
     */

    /*
     * remove all the tickets for all vehicles
     * on this chain
     */

    /*
     * free the vehicle
     */

    printf("Total tickets freed: %lu\n", cnt);
    return;
}
#endif
