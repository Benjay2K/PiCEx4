#include <stdio.h>
#include <stdlib.h>

int main(){

        char *sieve;        //pointer
        size_t i;
        unsigned count = 0;
        size_t n = 1000000;
        const unsigned target = 10001;  //our target is the 10001st prime number

        sieve = calloc(n, sizeof *sieve);
        for(i = 2; i < n; i++){                     //i should equal the first prime number 2
            if(!sieve[i]){                          //find the first i greater than j that is not marked in our list
                size_t j;                           //if there is such a number set j to that number

                count++;
                if(count == target){                //if our number count equals our target, then print value i,
                    printf("%lu\n", i);      //the prime number of the current count
                    break;                          //we are done here
                }
                for(j = i * 2; j < n; j += i){      //otherwise increase j
                    sieve[j] = 1;
                }
            }
        }
        free(sieve);                        //frees up the memory blocks used by calloc()
                                                    //and returns the memory to heap
    return 0;
}
