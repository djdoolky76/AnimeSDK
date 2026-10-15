#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LittleGameState : ::System::Int32
	{
		Invalid = 0,
		Ready = 1,
		Start = 2,
		Stop = 3,
	};
}
