#include <stdio.h>

int main() {
    int nombreDeNotes;
    float somme = 0.0;
    
    printf("Combien de notes voulez-vous entrer ? ");
    scanf("%d", &nombreDeNotes);
    
    // Vérifier si nombreDeNotes est valide (positif)
    if (nombreDeNotes <= 0) {
        printf("Le nombre de notes doit être supérieur à zéro.\n");
        return 1;  // Quitter le programme avec un code d'erreur
    }
    
    for (int i = 1; i <= nombreDeNotes; i++) {
        float note;
        printf("Entrez la note #%d : ", i);
        scanf("%f", &note);
        
        // Ajouter la note à la somme
        somme += note;
    }
    
    // Calculer la moyenne
    float moyenne = somme / nombreDeNotes;
    
    // Afficher la moyenne
    printf("La moyenne des notes est : %.2f\n", moyenne);
    
    return 0;
}
