#include <Arduino.h>



void setup(){
	
Serial.begin(115200);

}

int  anagram(){
   char s1[]= "bannana";
   char s2[]= "pannana";
   char temp;
   int i, j;

   int length1 = strlen(s1);
   int length2 = strlen(s2);
   
   if( length1 != length2) {          // check the length of Strings    
           
     printf("%s and %s are not anagrams! \n", s1, s2);
	  return 0;
   }   	 
	
   for (i = 0; i < length1-1; i++) {         // Bubble sortig character by character

      for (j = i+1; j < length1; j++) {
         
		 if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
	
         }
         
		 if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
			
         }
      }
   }

   
   for(i = 0; i<length1; i++) { //checking the character by character

      if(s1[i] != s2[i]) {    

		printf("%s and %s are not anagrams! oh_no!!!\n", s1, s2);  
      return 0;     
     
	  }

   }

   printf("Strings are anagrams! \n");
   return 0;
  }


void loop () {
  

   anagram(); //call the anagram function
   
    while (1);
}