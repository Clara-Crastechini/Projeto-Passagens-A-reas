// Clara Crastechini e Kaue Nascimento.

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

void desenhaBoasVindas()
{
    cout << "  ------------------------- " << endl;
    cout << "|                           |" << endl;
    cout << "|   Bem vindo ao porgrama   |" << endl;
    cout << "|            de             |" << endl;
    cout << "|     Passagens Aereas      |" << endl;
    cout << "|                           |" << endl;
    cout << "  ------------------------  " << endl;
}
void menu()
{
    cout << "  ---------- MENU ----------  " << endl;
    cout << "|                            |" << endl;
    cout << "| Escolha uma opcao:         |" << endl;
    cout << "|   1) Cadastrar Passagem    |" << endl;
    cout << "|   2) Listrar Passagens     |" << endl;
    cout << "|   0) Sair                  |" << endl;
    cout << "|                            | " << endl;
    cout << "  ---------- MENU ----------  " << endl;
}
void limpaBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datasViagem;


void cadastrarPassagens()
{
    limpaBufferDoCin();

    string nome, origem, destino, data;

    cout << "Digite o nome do passageiro: " << endl;
    getline(cin, nome);
    cout << endl;
    passageiros.push_back(nome);

    cout << "Digite a origem: " << endl;
    getline(cin, origem);
    cout << endl;
    origens.push_back(origem);

    cout << "Digite o destino: " << endl;
    getline(cin, destino);
    cout << endl;
    destinos.push_back(destino);

    cout << "Digite a data: " << endl;
    getline(cin, data);
    cout << endl;
    datasViagem.push_back(data);
}
void listarPassagens(){

    cout << "  ------------------------------  " << endl;
    cout << "  |                             | " << endl;
    cout << "  |   Bem vindo ao programa     | " << endl;
    cout << "  |            de               | " << endl;
    cout << "  |    Lista de Passageiros     | " << endl;
    cout << "  |                             | " << endl;
    cout << "  ------------------------------  " << endl;
    cout << endl << endl;

    cout << "Quantidade de Passagens: " << passageiros.size() << endl << endl;

    for (int i = 0; i < passageiros.size(); i++)
    {
        cout << "Passageiro " << i << ": "<< passageiros[i] << endl; 
        cout << "Origem " << i << ": " <<  origens[i] << endl;
        cout << "Destino " << i << ": " << destinos[i] << endl;
        cout << "Data " << i << ": " << datasViagem[i] << endl << endl;    
        }
    
}
int main()
{
    system("cls");

    int opcao = -1;
    string continua;
    desenhaBoasVindas();

    cout << "Opcao: " << endl
         << endl;

    do
    {
        menu();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 0:
            cout << "Voce escolheu a opcao Sair do Programa." << endl;
            break;
        case 1:
            cout << "Voce escolheu a opcao Cadastrar Passagem." << endl;
            cadastrarPassagens();
            break;
        case 2:
            cout << "Voce escolheu a opcao Listar Passagens." << endl;
            listarPassagens();
            
            break;
        default:
            cout << "Opcao invalida." << endl;
            break;
        }

    } while (opcao != 0);

    cout << "Obrigado por utilizar o programa :)" << endl
         << endl;
    return 0;
}
