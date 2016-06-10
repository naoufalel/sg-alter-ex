#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Fonction qui permet de résoudre l'exercice, en commençant par vérifier 
// la division, puis l'ordre d'apparition
// Paramètre d'entée : un entier 'i'
void showOutput(int i){
    string temp="";

    // Partie qui permet de verifier si un nombre est divisible par 3, 5 ou 7 
    if(i%3==0){
        temp+="Foo";
    }

    if(i%5==0){
        temp+="Bar";
    }

    if(i%7==0){
        temp+="Qix";
    }

    /////////////////////////////////////////////////////////////////////////////
    // Partie qui verifie si un chiffre 3, 5 ou 7 est present dans le nombre
    // choix de cette méthode pour de raisons dynamiques, donc appliquable 
    // à n'importe quel nombre

    // les 3 lignes qui suivent sont pour : convertir un int en string
    ostringstream ss;
    ss<<i; // 
    string str = ss.str();

    // Parcourir le string
    for(int j=0;j<str.length();j++){
        if(str[j] == '3'){
            temp+="Foo";
        }
        if(str[j] == '5'){
            temp+="Bar";
        }
        if(str[j] == '7'){
            temp+="Qix";
        }
    }


    if(temp==""){
        // si un nombre ne passe pas par les conditions, temp est 
        // remplacé par sa valeur dans l'affichage
        temp= ss.str(); 
    }

    // Affichage final
    cout<<"pour " << i << ": " << temp << endl;
}


// La fonction principale du programme
int main(){

    //affichage des nombres de 1 à 100
    for(int i=1; i<=100;i++){
        showOutput(i);
    }

    return 0;
}