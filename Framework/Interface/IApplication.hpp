#pragma once

#include "Interface.hpp"
#include "IRuntimeModule.h"

namespace My{
	Interface IApplication: implements IRuntimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Finalize() = 0;
		virtual void Tick() = 0;
		virtual bool IsQuit() = 0;
	}
}