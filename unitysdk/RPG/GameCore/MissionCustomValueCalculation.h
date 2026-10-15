#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MissionCustomValueCalculation : ::System::Int32
	{
		Add = 0,
		Multiply = 1,
		Random = 2,
	};
}
