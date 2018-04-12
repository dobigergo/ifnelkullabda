#include <stdio.h>
#include <time.h>

using namespace std;

int main(){

time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day;
  const char * weekday[] = { "Vasárnap", "Hétfő",
                             "Kedd", "Szerda",
                             "Csütörtök", "Péntek", "Szombat"};

 
  printf ("Add meg az évet: "); fflush(stdout); scanf ("%d",&year);
  printf ("Add meg a hónapot: "); fflush(stdout); scanf ("%d",&month);
  printf ("Add meg a napot: "); fflush(stdout); scanf ("%d",&day);


  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  
  mktime ( timeinfo );

  printf ("A szülinapod napja:  %s.\n", weekday[timeinfo->tm_wday]);
}
