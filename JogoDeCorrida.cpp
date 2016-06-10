//Jogo de Corrida
//Entrada e saída de dados
#include <iostream> 
//Permite usar um  tipo de dado String
#include <string>
//Permite usar o tempo como "semente" do gerador
#include <ctime>
using namespace std;

//Indica função void criada
void imprimir_espacos(int total1);

//Função principal
int main(int argc, char* args[])
{

	//Variável lógica usada na condição do laço
	bool sair = false;
	//Variáveis usadas para salvar o nome dos jogadores
	string jog1, jog2;
	//Quantidade inicial de espaços de cada carro
	int total1 = 0, total2 = 0;

	//Pede para que o jogador 1 digite seu nome
	cout << "Digite o nome do jogador 1:" << endl;
	//Salva o nome digitado na variável
	cin >> jog1;

	//Pede para que o jogador 2 digite seu nome
	cout << "Digite o nome do jogador 2:" << endl;
	//Salva o nome digitado na variável
	cin >> jog2;

	//Enquanto a variável receber a condição lógica falsa o laço continua 
	while (sair == false)
	{


		//Indica o tamanho da pista
		int total_espacos = 80;

		//Comando usado para que possa usar o comando rand fazer com que a variável receba um número aleatório 
		srand((int)time(0));
		//Gera um número aleatório entre 1 e 3
		total_espacos = rand() % 3 + 1;
		//Adiciona o número gerado na variável para aumentar a quatidade de espaços
		total1 = total1 + total_espacos;

		//Gera um número aleatório entre 1 e 3
		total_espacos = rand() % 3 + 1;
		//Adiciona o número gerado na variável para aumentar a quatidade de espaços
		total2 = total2 + total_espacos;

		//Mostra a imagem do jogo e os status dos personagens

		cout << " Duelling of Carts :" << endl;

		cout << " LARGADA:                                                               CHEGADA:" << endl;

		cout << " jogador 1:" << jog1 << endl; //Usa o nome salvo na variável jog1
		imprimir_espacos(total1); //Usa o número gerado para aumentar a quantidade de espaços
		cout << "  _  " << endl; //Teto do carro
		imprimir_espacos(total1); //Usa o número gerado para aumentar a quantidade de espaços
		cout << "-o-o>" << endl; //Rodas do carro
		cout << "_______________________________________________________________________________" << endl; //Pista da corrida

		cout << " Você avançou  " << total1 << endl; //Quantidades de espaços avançados 


		cout << "Piloto 2:" << jog2 << endl; //Usa o nome salvo na variável jog2
		imprimir_espacos(total2); //Usa o número gerado para aumentar a quantidade de espaços 
		cout << "  _  " << endl; //Teto do carro
		imprimir_espacos(total2); //Usa o número gerado para aumentar a quantidade de espaços
		cout << "-o-o>" << endl; //Rodas do carro
		cout << "_______________________________________________________________________________" << endl; //Pista da corrida



		cout << " Você avançou  " << total1 << endl; //Quantidades de espaços avançados


		//Limpa a tela
		system("cls");



		//Testa se o caminha percorrido por algum jogador for = 80, executa o if para que a variável lógica se torne verdadeira e o laço acaba
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
	if (total1 >= 80) cout << jog1 << "Você venceu! Congratulations!" << endl;

	else if (total2 >= 80) cout << jog2 << " Você venceu! Congratulations! " << endl;

	else cout << "EMPATE!" << endl;

	return 0;

}



//Usa a função void como "Super poder"
void imprimir_espacos(int total)
{

	//Laço for
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++) 
	{
		//Imprime os espaços gerados aleatoriamente
		cout << " ";


	}

}