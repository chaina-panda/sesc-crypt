#define _XOPEN_SOURCE
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <crypt.h>

int main(){
	char password[10000] = {""};
	char hash[10000] = {""};
  scanf("%s", password);
	scanf("%s", hash);
  char* Ougi = crypt(password, hash);
	if (Ougi != NULL){
		if (strcmp(Ougi, hash) == 0){
			printf("allow\n");
		} else {
			printf("deny\n");
		}
	} else {
		printf("error\n");
	}
	return 0;
}