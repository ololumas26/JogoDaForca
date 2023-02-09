#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Código criado por Eliseu Franco Samulolo
// 09/02/2023

string nome1, nome2;;
int i = 0; int tamanho = 0, vez = 1, tentativa = 0, acertou = 0;
bool acerto = false;

char *palavra = (char*) malloc(sizeof(palavra));
char *advinhou = (char*) malloc (sizeof(char));
char *letra = (char *) malloc (sizeof(char));


void Inicializar_Jogo();



int main()
{

    Inicializar_Jogo();
    return 0;
}


void Inicializar_Jogo(){


    cout << "---------------------------------------\n";
    cout << "\t   Jogo Da Forca\n";
    cout << "---------------------------------------\n";

    if (vez == 1){

        cout << "Diz ao seu amigo para fechar os olhos e escreva a palavra secreta\n";
        cin >> palavra;

        while (palavra[i] != '\0'){
            i++;
            tamanho++;
        }
        advinhou[tamanho];
        for (int i = 0; i < tamanho; i++){
            advinhou[i] = '*';
        }
        while (true){
            system("cls");
            for (int i = 0; i < tamanho; i++){
                cout << advinhou[i] << " ";
            }

            cout << endl;
            cout << "--------------------------------------------\n";
            cout << "Errou: " << tentativa << endl;
            cout << "Acertou: " << acertou << endl;
            cout << " Advinhe a palavra secreta, escreva uma letra\n";
            cin >> letra;

            for (int i = 0; i < tamanho; i++){

                if (letra[0] == palavra[i]){
                    advinhou[i] = letra[0];
                    acertou ++;
                    acerto = true;
                }
            }
            if (acerto != true){
                tentativa +=1;
            }
            if (acertou == tamanho){
                cout << "Parabens Voce ganhou";
                cout << "Palavra secreta: [" << palavra <<"]" <<endl;
                break;
            }
            if (tentativa == 6){
                cout << "Forca, voce perdeu " << endl;
                cout << "Palavra secreta: " << palavra << endl;
                break;
            }
        }
    }

}


