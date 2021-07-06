#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <new>
#include <fstream>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Cria o objeto de arquivo
    ofstream arquivoDeSaida;

    //Abre o arquivo ou cria caso não exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    //Escrever no arquivo
    arquivoDeSaida << "Walcker" << endl;

    //Dizer qual arquivo será lido
    ifstream input("Texto.txt");

    //String que receberá o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conteúdo
    cout << textoLido << endl;

    //Fechar o arquivo
    arquivoDeSaida.close();
    
    return 0;
}
