#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int EscolhaJogador, EscolhaComputador;
	srand(time(NULL));

	do
	{
		do
		{
			printf("Escolha uma opcao:\n");
			printf("+-------------------+\n");
			printf("| 1: Tesoura        |\n");
			printf("| 2: Papel          |\n");
			printf("| 3: Pedra          |\n");
			printf("| 4: Lagarto        |\n");
			printf("| 5: Spok           |\n");
			printf("| 6: sair           |\n");
			printf("+-------------------+\n");

			scanf("%i",&EscolhaJogador);
		} while (EscolhaJogador > 6 || EscolhaJogador < 1);

		switch (EscolhaJogador)
		{
		case 6:
			break;

		default:
			EscolhaComputador = rand() % 5;
			EscolhaComputador ++;

			if (EscolhaComputador == EscolhaJogador)
			{
				printf("Jogador escolheu %i e Computador escolheu %i\n",EscolhaJogador, EscolhaComputador);
				printf("Empate!!\n\n");
			}
			else if ((EscolhaJogador == 1 && EscolhaComputador == 2) || (EscolhaJogador == 1 && EscolhaComputador == 4) || (EscolhaJogador == 2 && EscolhaComputador == 3) || (EscolhaJogador == 2 && EscolhaComputador == 5) || (EscolhaJogador == 3 && EscolhaComputador == 4) || (EscolhaJogador == 3 && EscolhaComputador == 1) || (EscolhaJogador == 4 && EscolhaComputador == 5) || (EscolhaJogador == 4 && EscolhaComputador == 2) || (EscolhaJogador == 5 && EscolhaComputador == 1) || (EscolhaJogador == 5 && EscolhaComputador == 3))
			{
				printf("Jogador escolheu %i e Computador escolheu %i\n",EscolhaJogador, EscolhaComputador);
				printf("Jogador ganhou!!\n\n");
			}
			else
			{
				printf("Jogador escolheu %i e Computador escolheu %i\n",EscolhaJogador, EscolhaComputador);
				printf("Computador ganhou!!\n\n");
			}

			break;

		}

	} while (EscolhaJogador != 6);

	return 0;
}