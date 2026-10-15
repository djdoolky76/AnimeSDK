#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class Collision2DUpdateType : ::System::Int32
	{
		Manual = 0,
		Tick = 1,
		RtTick = 2,
	};
}
