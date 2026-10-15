#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SpaceZooSpicalEventState : ::System::Int32
	{
		Invalid = 0,
		Lock = 1,
		Unlock = 2,
		Get = 3,
	};
}
