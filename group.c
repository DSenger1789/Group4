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
  
// Group methods include name, year in school, major , hobbies, hometown, anything else interesting. 
void Linda(){
	char myName[20] = "Linda Schimming";
	char myYearInSchool[3] = "3";
  char myMajor[30] = "Computer Science";
	char myHobbies[40] = "drawing, horseback riding";
  char myHometown[20] = "Puyallup,WA";
	char myInteresting[20] = "unsure";
  
  printf(" My Name: %s\n My year in school: %s\n My Major: %s \n My Hobbies: %s \n My Hometown: %s \n Someting interesting : %s \n",myName, myYearInSchool, myMajor, myHobbies, myHometown, myInteresting);
   
  
}

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

 Meaghan();
 Linda();
 Dustin();

 return 0;
}
