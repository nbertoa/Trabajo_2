// Trabajo_2.cpp: 

#include "stdafx.h"
#include "menu.h"
#include "operaciones_matematicas.h"
#include "operaciones_string.h"
#include "command_executer.h"

int main()
{
	uint8_t command = PrintM();
	Execute(command);
	_getch();
	main();
    return 0;
}

