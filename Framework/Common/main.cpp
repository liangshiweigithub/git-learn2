#include <stdio.h>
#include "IApplication.hpp"

namespace My
{
	extern IApplication *g_pApp;
}

int main(int argc, char **argv)
{
	int ret;
	if((ret = My::g_pApp -> Initialize()) != 0)
	{
		printf("App intialize failed, will exit now.");
		return ret;
	}
	
	while(!My::g_pApp->IsQuit())
	{
		My::g_pApp->Tick();
	}
	
	My::g_pApp -> Finalize();
	return 0;
}