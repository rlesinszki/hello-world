/* hello-world.c
*
*/

#include <stdio.h>
#include <time.h>
#include <unistd.h> // Sleep function.

int main(int argc, char **argv) {
  printf("Hello World\n");  
  
  // Get time.
  time_t now = time(NULL);
  printf("%ld\n", now); // # of seconds since Jan. 1, 1970 midnight. 
   
  // Convert time to a string with ctime.
  char *string_now = ctime(&now);
  printf("%s\n", string_now);

  // Get time broken out into parts.
  struct tm *gm_time = gmtime(&now); // Grenigs time.
  
  printf("tm_sec: %d\n", gm_time->tm_sec);
  printf("tm_min: %d\n", gm_time->tm_min);
  printf("tm_hour: %d\n", gm_time->tm_hour);
  printf("tm_mday: %d\n", gm_time->tm_mday);
  printf("tm_mon: %d\n", gm_time->tm_mon); // Starting from 0. 
  printf("tm_year: %d\n", gm_time->tm_year); // Years from 1900.
  printf("tm_wday: %d\n", gm_time->tm_wday);
  printf("tm_yday: %d\n", gm_time->tm_yday);
  printf("tm_isdst: %d\n", gm_time->tm_isdst);    
  printf("\n");
  
  struct tm *cur_time = localtime(&now);   
  
  
  printf("tm_sec: %d\n", cur_time->tm_sec);
  printf("tm_min: %d\n", cur_time->tm_min);
  printf("tm_hour: %d\n", cur_time->tm_hour);
  printf("tm_mday: %d\n", cur_time->tm_mday);
  printf("tm_mon: %d\n", cur_time->tm_mon); // Starting from 0. 
  printf("tm_year: %d\n", cur_time->tm_year); // Years from 1900.
  printf("tm_wday: %d\n", cur_time->tm_wday);
  printf("tm_yday: %d\n", cur_time->tm_yday);
  printf("tm_isdst: %d\n", cur_time->tm_isdst);
  
  char s[100];
  strftime(s, 100, "%c", cur_time);
  printf("%s\n", s);
  
  return 0;
}


