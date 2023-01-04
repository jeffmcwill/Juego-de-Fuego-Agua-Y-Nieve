#include <stdio.h>
#include <conio.h>

//juego tipo card jitsu de club penguin escrito en c. se basa en el clasico "Rock, Paper, Scissors..."

void mejorde3();
void mejorde5();
void mejorde7();
void mejorde10();

int main()
{
	int user;
	
	do{
		printf("-------------------------\n");
		printf("- Fuego,Agua o NIEVE... -\n");
		printf("-------------------------\n");		
		printf("> 1. Al Mejor de 3. \n");
		printf("> 2. Al mejor de 5. \n");
		printf("> 3. Al mejor de 7. \n");
		printf("> 4. Al mejor de 10.\n");
		printf("-------------------------\n");
		printf("> 5. Salir...\n");
		printf("-------------------------\n");
		printf("> ");
		
		fflush(stdin);
		scanf("%i",&user);
		
		switch(user){
			case 1 : printf("Ok, juguemos al mejor de 3.\n"),mejorde3();
				break;
			case 2 : printf("Ok, juguemos al mejor de 5.\n"),mejorde5();
				break;
			case 3 : printf("Ok, juguemos al mejor de 7.\n"),mejorde7();
				break;
			case 4 : printf("Ok, juguemos al mejor de 10.\n"),mejorde10();
				break;
			case 5 : printf("oh bueno, jugaremos mas tarde... Hasta luego.\n");
				break;
			default : printf("Caracteres no soportados por el programa... Reintente nuevamente.\n");
		}
		
		//metodo para romper loop
		
		if (user == 1){
			break;
		}
		else if (user == 2){
			break;
		}
		else if (user == 3){
			break;
		}
		else if (user == 4){
			break;
		}
		
	}while(user != 5);
	
	system("pause");
	return 0;
}

//el mejor de 3

void mejorde3(){
	
	int user2,enemigo,jugadorP,enemigoP,salir;
	
	//funcion borrar cmd
	system("cls");
	
	jugadorP = 0;
	enemigoP = 0;
	
	do{
		printf("----------------------------------\n");
		printf("Puntaje: Jugador %i // Enemigo %i \n",jugadorP,enemigoP);
		printf("----------------------------------\n");
		printf("-       Fuego,Agua o NIEVE...    -\n");
		printf("----------------------------------\n");
		printf("> 1. Fuego. \n");
		printf("> 2. Agua. 	\n");
		printf("> 3. Nieve. \n");
		printf("----------------------------------\n");
		printf("> 4. Ir a menu.\n");
		printf("----------------------------------\n");
		printf("> ");
		
		fflush(stdin);
		scanf("%i",&user2);
		
		if (user2 == 1){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (user2 == 2){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (user2 == 3){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		else if (user2 == 4){
			printf("Saliendo \n");
			break;
		}
		
		srand(time(NULL));
		enemigo=rand() % 2;
		
		if (enemigo == 0){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (enemigo == 1){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (enemigo == 2){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		
		//Ganadores y perdedores...
		
		//Fuego = 1
		
		if (user2 == 1 && enemigo == 0){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 1 && enemigo == 1){
			system("cls");
			printf("-------------------------------------------------------------\n");
			printf("El agua del enemigo cubre al fuego del jugador. Enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 1 && enemigo == 2){
			system("cls");
			printf("----------------------------------------------------------------\n");
			printf("El fuego del jugador derreti la nieve del enemigo. Jugador GANA.\n");
			jugadorP++;
		}
		
		//Agua = 2
		
		else if (user2 == 2 && enemigo == 0){
			system("cls");
			printf("--------------------------------------------------------------\n");
			printf("El agua del jugador seca el fuego del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 2 && enemigo == 1){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 2 && enemigo == 2){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del enemigo congela el agua del jugador... Enemigo GANA.\n");
			enemigoP++;			
		}
		
		//Nieve
		
		else if (user2 == 3 && enemigo == 0){
			system("cls");
			printf("---------------------------------------------------------------------------\n");
			printf("La nieve del jugador es derretida por el fuego del enemigo... enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 3 && enemigo == 1){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del jugador congela el agua del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 3 && enemigo == 2){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		
		//rompe el juego una vez que ganamos...
		
		if (jugadorP == 3){
			break;
		}
		else if (enemigoP == 3){
			break;
		}
		
	}while(user2 != 4);
	
	//Mensaje de que el jugador gano...
	
	if (jugadorP == 3){
		printf("----------------\n");
		printf("- JUGADOR GANA -\n");
		printf("----------------\n");
	}
	else if (enemigoP == 3){
		printf("----------------\n");
		printf("- ENEMIGO GANA -\n");
		printf("----------------\n");
	}
	
	printf("------------------\n");
	printf("¿Jugar de nuevo?\n");
	printf("------------------\n");
	printf("1. Si \n");
	printf("2. No \n");
	printf("------------------\n");
	printf("> ");
	
	scanf("%i",&salir);
	
	switch(salir){
		case 1 : printf("Ok, juguemos.\n"),system("cls"),mejorde3();
			break;
		case 2 : printf("Ok, yendo al menu principal...\n"),system("cls"),main();
			break;
	}
}

//el mejor de 5

void mejorde5(){
	
	int user2,enemigo,jugadorP,enemigoP,salir;
	
	//funcion borrar cmd
	system("cls");
	
	jugadorP = 0;
	enemigoP = 0;
	
	do{
		printf("----------------------------------\n");
		printf("Puntaje: Jugador %i // Enemigo %i \n",jugadorP,enemigoP);
		printf("----------------------------------\n");
		printf("-       Fuego,Agua o NIEVE...    -\n");
		printf("----------------------------------\n");
		printf("> 1. Fuego. \n");
		printf("> 2. Agua. 	\n");
		printf("> 3. Nieve. \n");
		printf("----------------------------------\n");
		printf("> 4. Ir a menu.\n");
		printf("----------------------------------\n");
		printf("> ");
		
		fflush(stdin);
		scanf("%i",&user2);
		
		if (user2 == 1){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (user2 == 2){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (user2 == 3){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		else if (user2 == 4){
			printf("Saliendo \n");
			break;
		}
		
		srand(time(NULL));
		enemigo=rand() % 2;
		
		if (enemigo == 0){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (enemigo == 1){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (enemigo == 2){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		
		//Ganadores y perdedores...
		
		//Fuego = 1
		
		if (user2 == 1 && enemigo == 0){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 1 && enemigo == 1){
			system("cls");
			printf("-------------------------------------------------------------\n");
			printf("El agua del enemigo cubre al fuego del jugador. Enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 1 && enemigo == 2){
			system("cls");
			printf("----------------------------------------------------------------\n");
			printf("El fuego del jugador derreti la nieve del enemigo. Jugador GANA.\n");
			jugadorP++;
		}
		
		//Agua = 2
		
		else if (user2 == 2 && enemigo == 0){
			system("cls");
			printf("--------------------------------------------------------------\n");
			printf("El agua del jugador seca el fuego del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 2 && enemigo == 1){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 2 && enemigo == 2){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del enemigo congela el agua del jugador... Enemigo GANA.\n");
			enemigoP++;			
		}
		
		//Nieve
		
		else if (user2 == 3 && enemigo == 0){
			system("cls");
			printf("---------------------------------------------------------------------------\n");
			printf("La nieve del jugador es derretida por el fuego del enemigo... enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 3 && enemigo == 1){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del jugador congela el agua del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 3 && enemigo == 2){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		
		//rompe el juego una vez que ganamos...
		
		if (jugadorP == 5){
			break;
		}
		else if (enemigoP == 5){
			break;
		}
		
	}while(user2 != 4);
	
	//Mensaje de que el jugador gano...
	
	if (jugadorP == 5){
		printf("----------------\n");
		printf("- JUGADOR GANA -\n");
		printf("----------------\n");
	}
	else if (enemigoP == 5){
		printf("----------------\n");
		printf("- ENEMIGO GANA -\n");
		printf("----------------\n");
	}
	
	printf("------------------\n");
	printf("¿Jugar de nuevo?\n");
	printf("------------------\n");
	printf("1. Si \n");
	printf("2. No \n");
	printf("------------------\n");
	printf("> ");
	
	scanf("%i",&salir);
	
	switch(salir){
		case 1 : printf("Ok, juguemos.\n"),system("cls"),mejorde3();
			break;
		case 2 : printf("Ok, yendo al menu principal...\n"),system("cls"),main();
			break;
	}
}

//El mejor de 7

void mejorde7(){
	
	int user2,enemigo,jugadorP,enemigoP,salir;
	
	//funcion borrar cmd
	system("cls");
	
	jugadorP = 0;
	enemigoP = 0;
	
	do{
		printf("----------------------------------\n");
		printf("Puntaje: Jugador %i // Enemigo %i \n",jugadorP,enemigoP);
		printf("----------------------------------\n");
		printf("-       Fuego,Agua o NIEVE...    -\n");
		printf("----------------------------------\n");
		printf("> 1. Fuego. \n");
		printf("> 2. Agua. 	\n");
		printf("> 3. Nieve. \n");
		printf("----------------------------------\n");
		printf("> 4. Ir a menu.\n");
		printf("----------------------------------\n");
		printf("> ");
		
		fflush(stdin);
		scanf("%i",&user2);
		
		if (user2 == 1){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (user2 == 2){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (user2 == 3){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		else if (user2 == 4){
			printf("Saliendo \n");
			break;
		}
		
		srand(time(NULL));
		enemigo=rand() % 2;
		
		if (enemigo == 0){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (enemigo == 1){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (enemigo == 2){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		
		//Ganadores y perdedores...
		
		//Fuego = 1
		
		if (user2 == 1 && enemigo == 0){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 1 && enemigo == 1){
			system("cls");
			printf("-------------------------------------------------------------\n");
			printf("El agua del enemigo cubre al fuego del jugador. Enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 1 && enemigo == 2){
			system("cls");
			printf("----------------------------------------------------------------\n");
			printf("El fuego del jugador derreti la nieve del enemigo. Jugador GANA.\n");
			jugadorP++;
		}
		
		//Agua = 2
		
		else if (user2 == 2 && enemigo == 0){
			system("cls");
			printf("--------------------------------------------------------------\n");
			printf("El agua del jugador seca el fuego del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 2 && enemigo == 1){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 2 && enemigo == 2){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del enemigo congela el agua del jugador... Enemigo GANA.\n");
			enemigoP++;			
		}
		
		//Nieve
		
		else if (user2 == 3 && enemigo == 0){
			system("cls");
			printf("---------------------------------------------------------------------------\n");
			printf("La nieve del jugador es derretida por el fuego del enemigo... enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 3 && enemigo == 1){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del jugador congela el agua del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 3 && enemigo == 2){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		
		//rompe el juego una vez que ganamos...
		
		if (jugadorP == 7){
			break;
		}
		else if (enemigoP == 7){
			break;
		}
		
	}while(user2 != 4);
	
	//Mensaje de que el jugador gano...
	
	if (jugadorP == 7){
		printf("----------------\n");
		printf("- JUGADOR GANA -\n");
		printf("----------------\n");
	}
	else if (enemigoP == 7){
		printf("----------------\n");
		printf("- ENEMIGO GANA -\n");
		printf("----------------\n");
	}
	
	printf("------------------\n");
	printf("¿Jugar de nuevo?\n");
	printf("------------------\n");
	printf("1. Si \n");
	printf("2. No \n");
	printf("------------------\n");
	printf("> ");
	
	scanf("%i",&salir);
	
	switch(salir){
		case 1 : printf("Ok, juguemos.\n"),system("cls"),mejorde3();
			break;
		case 2 : printf("Ok, yendo al menu principal...\n"),system("cls"),main();
			break;
	}
}

//el mejor de 10

void mejorde10(){
	
	int user2,enemigo,jugadorP,enemigoP,salir;
	
	//funcion borrar cmd
	system("cls");
	
	jugadorP = 0;
	enemigoP = 0;
	
	do{
		printf("----------------------------------\n");
		printf("Puntaje: Jugador %i // Enemigo %i \n",jugadorP,enemigoP);
		printf("----------------------------------\n");
		printf("-       Fuego,Agua o NIEVE...    -\n");
		printf("----------------------------------\n");
		printf("> 1. Fuego. \n");
		printf("> 2. Agua. 	\n");
		printf("> 3. Nieve. \n");
		printf("----------------------------------\n");
		printf("> 4. Ir a menu.\n");
		printf("----------------------------------\n");
		printf("> ");
		
		fflush(stdin);
		scanf("%i",&user2);
		
		if (user2 == 1){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (user2 == 2){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (user2 == 3){
			printf("-------------\n");
			printf("Jugador: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		else if (user2 == 4){
			printf("Saliendo \n");
			break;
		}
		
		srand(time(NULL));
		enemigo=rand() % 2;
		
		if (enemigo == 0){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Fuego \n");
		}
		else if (enemigo == 1){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Agua \n");
		}
		else if (enemigo == 2){
			printf("-------------\n");
			printf("Enemigo: \n");
			printf("-------------\n");
			printf("Nieve \n");
		}
		
		//Ganadores y perdedores...
		
		//Fuego = 1
		
		if (user2 == 1 && enemigo == 0){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 1 && enemigo == 1){
			system("cls");
			printf("-------------------------------------------------------------\n");
			printf("El agua del enemigo cubre al fuego del jugador. Enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 1 && enemigo == 2){
			system("cls");
			printf("----------------------------------------------------------------\n");
			printf("El fuego del jugador derreti la nieve del enemigo. Jugador GANA.\n");
			jugadorP++;
		}
		
		//Agua = 2
		
		else if (user2 == 2 && enemigo == 0){
			system("cls");
			printf("--------------------------------------------------------------\n");
			printf("El agua del jugador seca el fuego del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 2 && enemigo == 1){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		else if (user2 == 2 && enemigo == 2){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del enemigo congela el agua del jugador... Enemigo GANA.\n");
			enemigoP++;			
		}
		
		//Nieve
		
		else if (user2 == 3 && enemigo == 0){
			system("cls");
			printf("---------------------------------------------------------------------------\n");
			printf("La nieve del jugador es derretida por el fuego del enemigo... enemigo GANA.\n");
			enemigoP++;
		}
		else if (user2 == 3 && enemigo == 1){
			system("cls");
			printf("-----------------------------------------------------------------\n");
			printf("La nieve del jugador congela el agua del enemigo... Jugador GANA.\n");
			jugadorP++;
		}
		else if (user2 == 3 && enemigo == 2){
			system("cls");
			printf("----------------------\n");
			printf("Empate... nadie gana. \n");
		}
		
		//rompe el juego una vez que ganamos...
		
		if (jugadorP == 10){
			break;
		}
		else if (enemigoP == 10){
			break;
		}
		
	}while(user2 != 4);
	
	//Mensaje de que el jugador gano...
	
	if (jugadorP == 10){
		printf("----------------\n");
		printf("- JUGADOR GANA -\n");
		printf("----------------\n");
	}
	else if (enemigoP == 10){
		printf("----------------\n");
		printf("- ENEMIGO GANA -\n");
		printf("----------------\n");
	}
	
	printf("------------------\n");
	printf("¿Jugar de nuevo?\n");
	printf("------------------\n");
	printf("1. Si \n");
	printf("2. No \n");
	printf("------------------\n");
	printf("> ");
	
	scanf("%i",&salir);
	
	switch(salir){
		case 1 : printf("Ok, juguemos.\n"),system("cls"),mejorde3();
			break;
		case 2 : printf("Ok, yendo al menu principal...\n"),system("cls"),main();
			break;
	}
}

//fin del codigo

