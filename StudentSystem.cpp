
#include<iostream>
using namespace std;
string id[30],nome[30],classe[30],curso[30];

int total=0;
void enter()
{
int x=0;
cout<<"Quantos estudantes deseja??"<<endl;
cin>>x;
if(total==0)
{
total=x+total;
for(int i=0;i<x;i++)
{
cout<<"\nDados do Estudante "<<i+1<<endl<<endl;
cout<<"Insira o identificador "<<endl;
cin>>id[i];
cout<<"Insira o nome: "<<endl;
cin>>nome[i];
cout<<"Insira a classe: "<<endl;
cin>>classe[i];
cout<<"Insira o curso: "<<endl;
cin>>curso[i];
}
}
else
{
for(int i=total;i<x+total;i++)

{
cout<<"\nDados do estudante "<<i+1<<endl<<endl;
cout<<"Insira o identificador ";
cin>>id[i];
cout<<"Insira o nome: ";
cin>>nome[i];
cout<<"Insira a classe: ";
cin>>classe[i];
cout<<"insira o curso: ";
cin>>curso[i];
}
total=x+total; 
}
}
void show()
{
if(total==0)
{
cout<<"Nenhum dado inserido"<<endl;
}
else
{
for(int i=0;i<total;i++)
{
cout<<"\nDados do estudante "<<i+1<<endl<<endl;
cout<<"Identificador "<<id[i]<<endl;
cout<<"Nome "<<nome[i]<<endl;
cout<<"Classe "<<classe[i]<<endl;
cout<<"Curso "<<curso[i]<<endl;
}
}
}
void search()
{
if(total==0)
{
cout<<"Nenhum dado inserido"<<endl;
}
else
{
string identificaEstudante;
cout<<"Insira o identificador do estudante"<<endl;
cin>>identificaEstudante;
for(int i=0;i<total;i++)
{
if(identificaEstudante==id[i])
{
cout<<"Identificador "<<id[i]<<endl;
cout<<"Nome "<<nome[i]<<endl;
cout<<"Classe "<<classe[i]<<endl;
cout<<"Curso "<<curso[i]<<endl;
}
}
}
}
void update()
{
if(total==0)
{
cout<<"Nenhum dado inserido"<<endl;
}
else{
string rollno;
cout<<"Insira o identificador do estudante que deseja alterar"<<endl;
cin>>identificaEstudante;
for(int i=0;i<total;i++)
{
if(identificaEstudante==id[i])
{
cout<<"\nDado anterior"<<endl<<endl;
cout<<"Dado do estudante "<<i+1<<endl;
cout<<"Identificador: "<<roll_no[i]<<endl;
cout<<"Nome "<<nome[i]<<endl;
cout<<"Classe "<<classe[i]<<endl;
cout<<"Curso "<<curso[i]<<endl;
cout<<"\nInsira os novos dados"<<endl<<endl;
cout<<"Insira o Identificador ";
cin>>id[i];
cout<<"Insira o nome: ";
cin>>nome[i];
cout<<"Insira a classe: ";
cin>>classe[i];
cout<<"Insira o curso: ";
cin>>curso[i];
}
}
}
}
void Delete()
{
if(total==0)
{
cout<<"Ainda não há dado inserido"<<endl;
}
else
{
int a;
cout<<"Tem certeza que irá deletar os dados?"<<endl;
cout<<"Selecione 1 para deletar"<<endl;
cin>>a;
if(a==1)
{
total=0;
cout<<"Todo o dado foi deletado..!!"<<endl;
}
else
{
cout<<"Por favor aperte 1 para deletar o dado"<<endl;
}
}
}
int main() 
{
int valor;
while(true) 
{
cout<<"\nAperte 1 para inserir dados"<<endl<<endl;
cout<<"Aperte 2 para mostrar dados"<<endl<<endl;
cout<<"Aperte 3 para procurar dados"<<endl<<endl;
cout<<"Aperte 4 para alterar dados"<<endl<<endl;
cout<<"Aperte 5 para deletar dados"<<endl<<endl;
cout<<"Aperte 6 para sair"<<endl<<endl;
cin>>valor;
switch(valor)
{
case 1:
enter();
break;
case 2:
show();
break;
case 3:
search();
break;
case 4:
update();
break;
case 5:
Delete();
break;
case 6:
exit(0);
break;
default:
cout<<"insersão inválida"<<endl;
break;
}
}
}