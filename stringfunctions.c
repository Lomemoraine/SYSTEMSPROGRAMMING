#include<stdio.h>
#include<string.h>
int main(){
char dest[100] = "Today is a";
char src[100] = "Peaceful day";

strcat(dest , src);
printf("Concatenated string is %s", dest);
return 0;


}
