#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraDuelGameType : ::System::Int32
	{
		None = 0,
		PVP = 1,
		PVE = 2,
		Custom = 3,
	};
}
