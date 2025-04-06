#include <stdio.h>
#include <string.h>

int main() {
    char dna[1000];
    scanf("%s", dna);
    int len = strlen(dna);
    
    for(int i=len-1;i>=0;i--){
        if(dna[i] == 'A') printf("T");
        else if(dna[i] == 'T') printf("A");
        else if(dna[i] == 'C') printf("G");
        else if(dna[i] == 'G') printf("C");
    }
    
    return 0;
}