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

#ifndef MYINSTICKET
TODO(USING THE SOLUTION insticket.c NOT MY CODE)
#else

/*
 * insertticket
 *      add a ticket (summons) to the database
 *
 *      YOU CANNOT USE CALLOC(), only malloc() is allowed.
 *
 *      if the vehicle (plate state) is not in the database then
 *      a new struct vehicle entry must be made for it in the hash table.
 *      New vehicle entries are made at the the FRONT of the collison chain
 *
 *      If the vehicle is already in the hash chain, you only need to add 
 *      a new ticket to the ticket chain for this summons.
 *
 *      Tickets are added to the ticket chain linked to the struct vehicle
 *      at the END of the ticket chain.
 *
 *      Also you must update the tot_fine and cnt_tickets in the struct vehicle
 *      to account for the new summons(ticket) just added
 *  fineTab pointer fine table. maps code number to text description & fine cost 
 *          you use this table to get the amount of the fine when calculating
 *          the tot_fine field in struct vehicle.
 *          example:
 *              struct vehicle *vhpt;
 *              vhpt->tot_fine += fineTab[code].fine;
 *  summ    summons id string to be added
 *          this string needs to be converted to a number to be stored in the
 *          database. This saves space and is faster to compare than a string         
 *          Conversion function is supplied. use example:
 *               unsigned long long summid;
 *               if (strtosumid(summ, &summid) != 0)
 *                  error handling
 *               new_ticket->summons = summid;
 *  plate   plate id string to be added
 *  state   state id string to be added
 *  date    date of summons string
 *          this string needs to be converted to a number to be stored in the
 *          database. This saves space and is faster to compare than a string
 *          The encoding into a number uses Linux time format.
 *          Conversion function is supplied. use example:
 *              time_t dateval;
 *              if (strtoDate(date, &dateval) != 0)
 *                  error handling
 *              new_ticket->date = dateval;
 *  code    summons code integer value used an an index into the fines table
 *
 * returns 0 if ok -1 for all errors
 */

int
insertticket(char *summ, char *plate, char *state, char *date, int code)
{
    unsigned long long summid;
    time_t dateval;

    (void)plate; // delete this when you write your code
    (void)state; // delete this when you write your code
    (void)code;  // delete this when you write your code

    if (strtosumid(summ, &summid) != 0)
        return -1;

    if (strtoDate(date, &dateval) != 0)
        return -1;

    /*
     * either add ticket to chain or add vehicle and then the ticket
     */
    
    /*
     * if you are inserting a ticket and find it is already in the database
     * do not insert it, do the following error message
     * fprintf(stderr,"%s: duplicate summons %llu\n", argv0, summid);
     * then do a return -1;
     */

    return 0;
}
#endif
