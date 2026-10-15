#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtTimeScope : ::System::Int32
	{
		Realtime = 0,
		GameWorld = 1,
		Entity = 2,
	};
}
