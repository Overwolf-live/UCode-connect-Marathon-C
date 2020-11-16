#include <unistd.h>

void mx_printstr(const char *);

void mx_printstr(const char *s) {
     int j = 0;
     char i = s[0];
     while(i != '\0') 
     {
          j++;
          i = s[j];
     }
     int len = j;
     write(1, s, len);
}
