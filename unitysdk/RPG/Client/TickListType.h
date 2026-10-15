#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TickListType : ::System::Int32
	{
		Tick = 0,
		LateTick = 1,
		EndOfLateTick = 2,
		Count = 3,
	};
}
