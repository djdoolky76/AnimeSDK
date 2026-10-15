#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvNpcMoveAlongPathStatus : ::System::Int32
	{
		Moving = 0,
		OnWaypoint = 1,
		Idle = 2,
	};
}
