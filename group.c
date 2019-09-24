// Group methods include name, year in school, major , hobbies, hometown, anything else interesting. 
#include <stdio.h>

void Dustin(){
  char userName[20] = "Dustin Senger";
  char class[15]  = "Senior";
  char major[15] = "Finance";
  char hobbies[60]  = "Photography";
  char hometown[20] = "Great Falls";
  char anythingElse[100] = "Did a 6 month tour in the Middle East w/ the Air Natl. Guard";
 
  printf("%s %s %s %s %s %s", userName, class, major, hobbies, hometown, anythingElse);
}


int main(){

 Dustin();

 return 0; 
}
