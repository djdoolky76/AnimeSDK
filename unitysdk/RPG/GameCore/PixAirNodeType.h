#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PixAirNodeType : ::System::Int32
	{
		None = 0,
		Select = 1,
		Battle = 2,
		FinalBattle = 3,
	};
}
