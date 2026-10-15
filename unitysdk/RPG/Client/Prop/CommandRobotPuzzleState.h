#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class CommandRobotPuzzleState : ::System::Int32
	{
		WaitOrder = 0,
		ExecutingOrder = 1,
	};
}
