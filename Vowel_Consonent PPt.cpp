//Write a program tha t accepts a character and check whether it is vowel or consonent?//

#include <stdio.h>                                                                 //Header file//
int main()                                                                       // Function//
{
	char ch;                                                                       // decleration of vaeiable//
	printf("enter a character");
	scanf("%c",&ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')               //expression//
	     
	printf("%c is vowel",ch);
	else
	printf("%C is consonent",ch);
	return  0;
}
