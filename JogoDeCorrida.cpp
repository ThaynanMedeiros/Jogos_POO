//Jogo de Corrida
//Entrada e sa�da de dados
#include <iostream> 
//Permite usar um  tipo de dado String
#include <string>
//Permite usar o tempo como "semente" do gerador
#include <ctime>
using namespace std;

//Indica fun��o void criada
void imprimir_espacos(int total1);

//Fun��o principal
int main(int argc, char* args[])
{

	//Vari�vel l�gica usada na condi��o do la�o
	bool sair = false;
	//Vari�veis usadas para salvar o nome dos jogadores
	string jog1, jog2;
	//Quantidade inicial de espa�os de cada carro
	int total1 = 0, total2 = 0;

	//Pede para que o jogador 1 digite seu nome
	cout << "Digite o nome do jogador 1:" << endl;
	//Salva o nome digitado na vari�vel
	cin >> jog1;

	//Pede para que o jogador 2 digite seu nome
	cout << "Digite o nome do jogador 2:" << endl;
	//Salva o nome digitado na vari�vel
	cin >> jog2;

	//Enquanto a vari�vel receber a condi��o l�gica falsa o la�o continua 
	while (sair == false)
	{


		//Indica o tamanho da pista
		int total_espacos = 80;

		//Comando usado para que possa usar o comando rand fazer com que a vari�vel receba um n�mero aleat�rio 
		srand((int)time(0));
		//Gera um n�mero aleat�rio entre 1 e 3
		total_espacos = rand() % 3 + 1;
		//Adiciona o n�mero gerado na vari�vel para aumentar a quatidade de espa�os
		total1 = total1 + total_espacos;

		//Gera um n�mero aleat�rio entre 1 e 3
		total_espacos = rand() % 3 + 1;
		//Adiciona o n�mero gerado na vari�vel para aumentar a quatidade de espa�os
		total2 = total2 + total_espacos;

		//Mostra a imagem do jogo e os status dos personagens

		cout << " Duelling of Carts :" << endl;

		cout << " LARGADA:                                                               CHEGADA:" << endl;

		cout << " jogador 1:" << jog1 << endl; //Usa o nome salvo na vari�vel jog1
		imprimir_espacos(total1); //Usa o n�mero gerado para aumentar a quantidade de espa�os
		cout << "  _  " << endl; //Teto do carro
		imprimir_espacos(total1); //Usa o n�mero gerado para aumentar a quantidade de espa�os
		cout << "-o-o>" << endl; //Rodas do carro
		cout << "_______________________________________________________________________________" << endl; //Pista da corrida

		cout << " Voc� avan�ou  " << total1 << endl; //Quantidades de espa�os avan�ados 


		cout << "Piloto 2:" << jog2 << endl; //Usa o nome salvo na vari�vel jog2
		imprimir_espacos(total2); //Usa o n�mero gerado para aumentar a quantidade de espa�os 
		cout << "  _  " << endl; //Teto do carro
		imprimir_espacos(total2); //Usa o n�mero gerado para aumentar a quantidade de espa�os
		cout << "-o-o>" << endl; //Rodas do carro
		cout << "_______________________________________________________________________________" << endl; //Pista da corrida



		cout << " Voc� avan�ou  " << total1 << endl; //Quantidades de espa�os avan�ados


		//Limpa a tela
		system("cls");



		//Testa se o caminha percorrido por algum jogador for = 80, executa o if para que a vari�vel l�gica se torne verdadeira e o la�o acaba
		if (total1 >= 80 || total2 >= 80)
		{
			sair = true;

		}

		//Limpa a tela
		else system("cls");


	}

	//Mostra que o jogo acabou
	cout << "Fim de jogo!" << endl;

	//Mostra se tem algum vencendor 
	if (total1 >= 80) cout << jog1 << "Voc� venceu! Congratulations!" << endl;

	else if (total2 >= 80) cout << jog2 << " Voc� venceu! Congratulations! " << endl;

	else cout << "EMPATE!" << endl;

	return 0;

}



//Usa a fun��o void como "Super poder"
void imprimir_espacos(int total)
{

	//La�o for
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++) 
	{
		//Imprime os espa�os gerados aleatoriamente
		cout << " ";


	}

}