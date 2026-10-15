#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CmdLineAntialiasingMode : ::System::Int32
	{
		Off = 0,
		TAA = 1,
		FXAA = 2,
	};
}
