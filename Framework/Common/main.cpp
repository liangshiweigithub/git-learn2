#include <stdio.h>
#include "IApplication.hpp"

namespace My
{
	extern IApplication *g_pApp;
}

int main(int argc, char **argv)
{
	int ret;
	if((ret = g_pApp -> Initialize()) != 0)
	{
		printf("App intialize failed, will exit now.");
		return ret;
	}
	
	while(!g_pApp->isQuit())
	{
		g_pApp->Tick();
	}
	
	g_pApp -> Finalize();
	return 0;
}