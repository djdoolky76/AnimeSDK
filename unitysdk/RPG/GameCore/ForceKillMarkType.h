#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ForceKillMarkType : ::System::Int32
	{
		Default = 0,
		StageInvasion = 1,
		MechanicThreshold = 2,
	};
}
