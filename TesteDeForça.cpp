//Entrada e saída de dados
#include <iostream>
//Permite usar um  tipo de dado String
#include <string>
//Permite usar o tempo como "semente" do gerador
#include <ctime>

using namespace std;

//Função principal
int main(int argc, char* args[])
{
	//Variável lógica usada na condição do laço
	bool sair = false;
	//Variáveis usadas para salvar o nome dos jogadores
	string jog1, jog2;
	//Vida inicial dos jogadores
	int vida1 = 20, vida2 = 20;
	//Ataque e defesa dos jogadores
	int A = 4, D = 2;


	//Pede para que o jogador 1 digite seu nome
	cout << "Digite o nome do jogador 1:" << endl;
	//Salva o nome digitado na variável
	cin >> jog1;

	//Pede para que o jogador 2 digite seu nome
	cout << "Digite o nome do jogador 2:" << endl;
	//Salva o nome digitado na variável
	cin >> jog2;

	//Enquanto a variável receber a condição lógica falsa o laço continua 
	while (sair == false) {

		//Mostra os guerreiros e os dados do jogador
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;


		//O jogo pausa para que o jogador espere que as ações abaixo aconteçam
		system("pause");

		//Variável usada para receber aleatoriamente o número do dado
		int dado6;

		//Comando usado para que possa usar o comando rand fazer com que a variável receba um número aleatório 
		srand((int)time(0));
		//Gera um número aleatório
		dado6 = rand() % 6 + 1;

		//Se o número gerado for maior que quatro, executa o if
		if (dado6 > 4)
		{
			//Usa o número gerado como dano na vida do jogador
			vida1 = vida1 - dado6;
			//Mostra o dano  na vida do jogador
			cout << jog1 << " Dano:" << -dado6 << endl;
			//Diz que o jogador causou o dano
			cout << jog2 << " Acertou! " << endl;
			//Manda apertar o enter para continuar
			cout << " Proxima jogada (Digite enter):" << endl;
			//Espera que o jogador digite enter
			cin.get();
		}
		//Se o número gerado for menor ou igual a quatro, executa else if
		else if (dado6 <= 4)
		{

			//Mostra que o jogador errou
			cout << jog2 << " Errou! " << endl;
			//Manda apertar o enter para continuar
			cout << " Proxima jogada (Digite enter): " << endl;
			//Espera que o jogador digite enter
			cin.get();

		}
		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		//Se o número gerado for maior que quatro, executa o if
		if (dado6 > 4)
		{

			//Usa o número gerado como dano na vida do jogador
			vida2 = vida2 - dado6;
			//Mostra o dano  na vida do jogador
			cout << jog2 << " Dano:" << -dado6 << endl;
			//Diz que o jogador causou o dano
			cout << jog1 << " Acertou!" << endl;
			//Manda apertar o enter para continuar
			cout << " Proxima jogada (Digite enter):" << endl;
			//Espera que o jogador digite enter
			cin.get();
		}
		//Se o número gerado for menor ou igual a quatro, executa o else if
		else if (dado6 <= 4) {

			//Mostra que o jogador errou
			cout << jog1 << " Errou!" << endl;
			//Manda apertar o enter para continuar
			cout << " Proxima jogada (Digite enter):" << endl;
			//Espera que o jogador digite enter
			cin.get();

		}
		//Mostra os status dos jogadores após o final da rodada
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		//Limpa a tela
		system("cls");


		//Testa se a vida de algum jogador for = 0, executa o if para que a variável lógica se torne verdadeira e o laço acaba
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		//Se não for, limpa a tela
		else system("cls");
	}

	//Mostra "Fim de jogo!"
	cout << "Fim de jogo!" << endl;

	//Mostra se tem algum vencendor
	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;


}