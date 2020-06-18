#include<stdio.h>
#include<process.h>

void morse_to_ascii();
void ascii_to_morse();

struct morse
{
	char ascii[2];
	char morse[10];
};

struct morse table[36]={
		   {"A",".-"},
	       {"B","-..."},
		   {"C","-.-."},
		   {"D","-.."},
		   {"E","."},
		   {"F","..-."},
		   {"G","--."},
		   {"H","...."},
		   {"I",".."},
		   {"J",".---"},
		   {"K","-.-"},
		   {"L",".-.."},
		   {"M","--"},
		   {"N","-."},
		   {"O","---"},
		   {"P",".--."},
		   {"Q","--.-"},
		   {"R",".-."},
		   {"S","..."},
		   {"T","-"},
		   {"U","..-"},
		   {"V","---."},
		   {"W",".--"},
		   {"X","-..-"},
		   {"Y","-.--"},
		   {"Z","--.."},
		   {"0","-----"},
		   {"1",".----"},
		   {"2","..---"},
		   {"3","...--"},
		   {"4","....-"},
		   {"5","....."},
		   {"6","-...."},
		   {"7","--..."},
		   {"8","---.."},
		   {"9","----."}
	      };       
int main()
{
	printf("\n Enter choice for conversion: \n1.Convert morse to ascii \n2.Convert ascii to morse\n");
	int a;
	scanf("%d",&a);
	switch(a)
	 {
	 	case 1:
	 		morse_to_ascii();
	 	    break;
	 	case 2:
	 		ascii_to_morse();
	 		break;
	 	default:
	 		printf("\nInvalid Input");
	 		exit(1);
	 }
	exit(0);
}

void morse_to_ascii()
{
	char m[10];
	int i;
	printf("\n Enter the morse code to search for character: ");
	fflush(stdin);
	gets(m);
	for(i=0;i<36;i++)
	{
	  if(strcmp(m,table[i].morse)==0)
	     {
			 printf("\n%s",table[i].ascii);
			 break;
		 }
	}
	if(i==36)
	  {
		printf("\n Invalid input!");
	  }
}

void ascii_to_morse()
{
	char m[2];
	int i;
	printf("\n Enter the lingual English alphabet: ");
	fflush(stdin);
	gets(m);
	for(i=0;i<36;i++)
	  {
		  if(strcmp(m,table[i].ascii)==0)
		   {
			   printf("\n%s",table[i].morse);
			   break;
		   }
	  }
	if(i==36)
	  {
		  printf("\nInvalid Input!");
	  }
}
