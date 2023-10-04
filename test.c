#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main() {
 char str[80];
 char key[20];
 printf("ENTER TEXT YOU WANT TO ENCODE: ");
 fgets(str, 80,stdin);
 printf("ENTER KEY: ");
 fgets(key, 20,stdin);
 int ss = strlen(str);
 int sk = strlen(key);
 char a = 0, b = 0, c;
 printf("ENDCODED MESSAGE: ");
 for (int i = 0, j = 0; i<ss-1; i++,j++) {
    if (j==sk-1) {
    j = 0;
    }
    if (ss==j+1) {
    i = ss+1;
    }
    a = str[i];
    b = key[j];
    c=a^b;
    printf("%c",c);
  }
getch();
return 0;
}