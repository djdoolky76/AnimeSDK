#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class E_PakType : ::System::Int32
	{
		DEV = 0,
		GM = 1,
		PRE = 2,
		CE = 3,
		BETA = 4,
		PROD = 5,
		PREbeta = 6,
	};
}
