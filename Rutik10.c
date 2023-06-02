#include<stdio.h>
main()
{
       char string1[20];
       int i, length;
       int flag = 0;
    
       printf("Enter a string:");
       scanf("%s", string1);
    
       length = strlen(string1);
    
       for(i=0;i < length ;i++)
		{
            if(string1[i] != string1[length-i-1])
		   {
            flag = 1;
            break;
           }
        }
    
    {
        printf("%s is not a palindrome", string1);
    }    
    {
        printf("%s is a palindrome", string1);
    }

}


