/* main.c */
#include <stdio.h>

int count(char* str, char b){
  int ans = 0;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == b){
      ans++;
    }
  }
  return ans;
}

void main (void)
{
	char * str1 = NULL;
  char * str2 = NULL;
  char * str3 = NULL;
  size_t inputSize;
  char sym;
  printf("Enter 3 sentences:\n");
  getline(&str1, &inputSize, stdin);
  getline(&str2, &inputSize, stdin);
  getline(&str3, &inputSize, stdin);
  printf("enter your letter:\n");
  scanf("%c", &sym);
  int ans = count(str1, sym);
  ans += count(str2, sym);
  ans += count(str3, sym);
  printf("Count of your letter in first sentence is: %d\n", ans);
}
