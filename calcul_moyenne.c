#include <stdio.h>

int main() {
    int nombreDeNotes;
    float somme = 0.0;
    
    printf("Combien de notes voulez-vous entrer ? ");
    scanf("%d", &nombreDeNotes);
    
    if (nombreDeNotes <= 0) {
        printf("Le nombre de notes doit être supérieur à zéro.\n");
        return 1; 
    }
    
    for (int i = 1; i <= nombreDeNotes; i++) {
        float note;
        printf("Entrez la note #%d : ", i);
        scanf("%f", &note);
        
        
        somme += note;
    }
    
    float moyenne = somme / nombreDeNotes;
    
    
    printf("La moyenne des notes est : %.2f\n", moyenne);
    
    return 0;
}
