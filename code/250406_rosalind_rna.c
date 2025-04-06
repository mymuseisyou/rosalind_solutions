#include <stdio.h>
#include <string.h>

int main() {
    char dna[1000];
    scanf("%s", dna);
    
    int len = strlen(dna);
    for(int i=0;i<len;i++){
        if(dna[i] == 'T') printf("U");
        else printf("%c", dna[i]);
    }
    
    return 0;
}