#pragma once

enum Status
{
	PLAY,           
	USER_WIN,       
	BOT_WIN,         
	NOT_WIN         
};

struct Game
{
	char board[3][3];  
	bool isUserTurn; 
	char userChar;   
	char botChar;     
	Status status;
};

Game initGame(char userChar);
/**
 1. ������� �����
 2. ���������� ���������� �������� ����.
*/
void updateDisplay(const Game game);
void botTurn(Game* game);
void userTurn(Game* game);
/**
������� ���������� ��� ���������� ��������� ���� ����� ���������� ����.
������� ��������� ����� ��������� ���� � ��������� game � ������� ��� ������� ������.
������� ���������� true, ���� ���� ���������� ��� �����, ����� false.
*/
bool updateGame(Game* game);