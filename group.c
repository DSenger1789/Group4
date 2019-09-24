#include <stdio.h>

void Meaghan(){
  char userName[20] = "Meaghan Toomey";
  char class[15]  = "Freshman";
  char major[15] = "CS & Marketing";
  char hobbies[60]  = "Digital art and writing";
  char hometown[20] = "Missoula";
  char anythingElse[100] = "I can solve a rubiks cube :D";
 
  printf("%s\n%s\n%s\n%s\n%s\n%s\n", userName, class, major, hobbies, hometown, anythingElse);
}


int main(){

 Meaghan();

 return 0; 
}
