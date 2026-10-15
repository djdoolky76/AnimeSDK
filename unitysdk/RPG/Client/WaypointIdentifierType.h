#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class WaypointIdentifierType : ::System::Int32
	{
		Invalid = 0,
		MazeEntity = 1,
		LittleGameEntity = 2,
		RuntimeEntity = 3,
	};
}
