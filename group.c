// Group methods include name, year in school, major , hobbies, hometown, anything else interesting. 
#include <stdio.h>
 master
void Linda(void){
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
master
}


int main(){
 master
  chars userName[20];
  int yearInSchool;
  chars major[15];
  chars hobbies[60];
  chars hometown[20];
  chars anythingElse[90];
  Linda();
  
  


 Dustin();

 return 0; 
master
}
