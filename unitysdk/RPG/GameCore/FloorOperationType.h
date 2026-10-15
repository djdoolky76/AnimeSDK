#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FloorOperationType : ::System::Int32
	{
		None = 0,
		EnterFloorTag = 1,
		ExitFloorTag = 2,
	};
}
