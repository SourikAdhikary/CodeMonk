#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    int i, length;
    int flag = 0;
    
    
    scanf("%s", S);
    
    length = strlen(S);
    
    for(i=0;i < length ;i++){
        if(S[i] != S[length-i-1]){
            flag = 1;
            break;
	   }
	}
    
    if (flag) {
        printf("NO\n");
    }    
    else {
        printf("YES\n");
    }
    return 0;
}
