#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GameObjectPoolInUseState : ::System::Byte
	{
		Unused = 0,
		UnusedInCache = 1,
		InUse = 2,
	};
}
