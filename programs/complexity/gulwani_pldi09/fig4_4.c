#include <stdio.h>
#include <assert.h>
#include <time.h>

int mainQ(int n, int m){
     assert (m > 0);
     assert (n > m);
     int i = n;
     int t = 0;
     int c1 = 0;
     int c2 = 0;
     while(i>0){
	  
	  if (i < m) {
	       i--;
	       c1++;
	  }else{
	       i = i-m;
	       c2++;
	  }
	  t++;
     }
     
     
     
     //%%%traces: int n, int m, int t, int c1, int c2
     //dig2: l26: -c2 <= -1, c2*m - c2 - n + t == 0, c1 - m <= -1, -t <= -2, c1 + c2 - t == 0, c2 - t <= 0

     //Note: I got the above results which I think are right. But I have to manually pass in the flag -maxdeg 3  (i.e., DIG attempts to use maxdeg 4 automatically, but this requires many traces that it wasn't able to get).
     
     
     return 0;
}


int main(int argc, char **argv){
     mainQ(atoi(argv[1]), atoi(argv[2]));
     return 0;
}
