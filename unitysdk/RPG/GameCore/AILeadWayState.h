#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AILeadWayState : ::System::Int32
	{
		Move = 0,
		Wait = 1,
		Repath = 2,
		Dither = 3,
	};
}
