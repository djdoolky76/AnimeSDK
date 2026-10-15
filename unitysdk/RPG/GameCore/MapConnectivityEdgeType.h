#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MapConnectivityEdgeType : ::System::Int32
	{
		Default = 0,
		Teleport = 1,
		FiveDimEntrance = 2,
		FiveDimTeleport = 3,
	};
}
