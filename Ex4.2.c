#include <stdio.h>

//it is expected to run 100 times, however since bound is defined as an unsigned int (only holds positive values)
// and the for-loop starts with a negative integer value, the loop is not executed even a single time

int main(){
int i;
unsigned int bound = 100;

for ( i = -1; i < bound ; ++i )
    printf("number %d is here!\n", i);
}