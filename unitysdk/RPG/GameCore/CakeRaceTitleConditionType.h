#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CakeRaceTitleConditionType : ::System::Int32
	{
		None = 0,
		Equal = 1,
		GreaterEqual = 2,
		LessEqual = 3,
	};
}
