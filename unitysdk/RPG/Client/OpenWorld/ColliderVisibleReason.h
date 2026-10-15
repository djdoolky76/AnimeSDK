#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class ColliderVisibleReason : ::System::Int32
	{
		PVS = 0,
		OverrideSystem = 1,
	};
}
