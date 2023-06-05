#include<stdio.h> 
main() 
{ 
  char username[20]; 
  char userpwd[8]; 
  int i; 
  
  printf("Enter your username : "); 
  scanf("%s",username); 
  printf("Enter your password : "); 
  for(i=0;i<8;i++) 
  { 
   userpwd[i]=getch(); 
   printf("*");   	 
  } 
  userpwd[i]='\0'; 
  printf("\n\nPress any key to continue"); 
 if(!strcmp(username,"sumitadmin")
 && !strcmp(userpwd,"sumit123")) 
 { 
  printf("\n\nLogged In Successful"); 
 } 
 { 
  printf("\n\nIncorrect username or password"); 
 } 
}
