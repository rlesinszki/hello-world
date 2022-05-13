/* hello-world.c
*
*/

#include <stdio.h>
#include <time.h>
#include <unistd.h> // Sleep function.

int main(int argc, char **argv) {
  printf("Hello World\n");  
  
  time_t now = time(NULL);
  printf("%ld\n", now); // # of seconds since Jan. 1, 1970 midnight.
  

  
  // struct tm *gm_time = gmtime(&now);
  
}


