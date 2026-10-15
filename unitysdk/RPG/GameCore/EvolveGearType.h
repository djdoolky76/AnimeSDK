#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EvolveGearType : ::System::Int32
	{
		Tool = 0,
		Plugin = 1,
		DuelForge = 2,
		UltraForge = 3,
		Forge = 9,
		Undefined = 10,
	};
}
