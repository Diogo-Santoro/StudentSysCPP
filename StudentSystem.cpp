
#include<iostream>
using namespace std;

typedef struct{
    int id;
    char nome;
    char rua;
    char bairro;
    char cidade;
    char estado;
    int cep;
    int celular;
    char email;
    int cpf;
    int rg;

} informacoes;

informacoes cadastro;

void cadastroInfo(){
    system("cls");
    cout << "--Cadastro de informações--" << endl << endl;
    cout << "Código do usuário";
    cin >> cadastro.id;
    cout << "Nome do usuário";
    cin >> cadastro.nome << endl;
    cout << "--Endereço do usuário--" << endl;
    cout << "Rua";
    cin >> cadastro.rua;
    cout << "Bairro";
    cin >> cadastro.bairro;
    cout << "Cidade";
    cin >> cadastro.cidade;
    cout << "Estado";
    cin >> cadastro.estado;
    cout << "CEP";
    cin >> cadastro.cep;
    cout << "--Informações de contato do usuário--" << endl;
    cout << "Celular";
    cin >> cadastro.celular;
    cout << "E-mail";
    cin >> cadastro.email;
    cout << "CPF";
    cin >> cadastro.cpf;
    cout << "RG";
    cin >> cadastro.rg;
}

void listaInfo(){
    system("cls");
    cout << endl;
    cout << "--Listagem de dados--";
    cout << endl;
    cout << "Código do cadastro       " << cadastro.id << endl;;
    cout << "Nome do usuário          " << cadastro.nome << endl;
    cout << "Rua          " << cadastro.rua << endl;
    cout << "Bairro          " << cadastro.bairro << endl;
    cout << "Cidade          " << cadastro.cidade << endl;
    cout << "Estado          " << cadastro.estado << endl;
    cout << "CEP          " << cadastro.cep << endl;
    cout << "Celular          " << cadastro.celular << endl;
    cout << "E-mail          " << cadastro.email << endl;
    cout << "CPF          " << cadastro.cpf << endl;
    cout << "RG          " << cadastro.rg << endl;
    cout << endl;
    system("pause");
}

int main() {
    
    int op = 1;
    while (op != 0){
        system("cls");
        cout << "1 - Cadastrar"<<endl;
        cout << "0 - fim"<<endl;
        cout << "Opcao ";
        cin >> op;
        switch (op){
        case 1 :
            cadastroInfo();break;
        case 2 :
            listaInfo();break;
        default:break;
        }
    }
    return 0;
}