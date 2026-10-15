#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharaStoryMoveState : ::System::Int32
	{
		Moving = 0,
		WaitStop = 1,
		Stopping = 2,
		Arrived = 3,
		AlwaysMoving = 4,
	};
}
