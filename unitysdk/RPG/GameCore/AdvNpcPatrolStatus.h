#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvNpcPatrolStatus : ::System::Int32
	{
		Walking = 0,
		OnWaypoint = 1,
		Idle = 2,
	};
}
