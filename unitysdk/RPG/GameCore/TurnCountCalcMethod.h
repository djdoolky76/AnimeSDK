#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TurnCountCalcMethod : ::System::Int32
	{
		Total = 0,
		LightTeam = 1,
		DarkTeam = 2,
	};
}
