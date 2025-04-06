#include <stdio.h>
#include <string.h>

int main() {
    char gene[1000];
    int a = 0, c = 0, g = 0, t = 0, i;
    scanf("%s", gene);
    
    int len = strlen(gene);
    for(i=0;i<len;i++){
        if(gene[i] == 'A') a++;
        if(gene[i] == 'C') c++;
        if(gene[i] == 'G') g++;
        if(gene[i] == 'T') t++;
    }
    
    printf("%d %d %d %d", a, c, g, t);
    
    return 0;
}