 #include<stdio.h>
#include<string.h>
int main()
{

  char stringOrLetter[20];
  int i;
  printf("Word Or Letter");
  scanf("%s",stringOrLetter);
  printf("The string is->%s",stringOrLetter);
  for(i=0;i<=strlen(stringOrLetter);i++){
      if(stringOrLetter[i]>=97&&stringOrLetter[i]<=122)
       stringOrLetter[i]=stringOrLetter[i]-32;
  }
  printf("\nThe string in lower case is->%s\n",stringOrLetter);
  return 0;
}

