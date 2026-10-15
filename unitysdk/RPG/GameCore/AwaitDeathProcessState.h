#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AwaitDeathProcessState : ::System::Int32
	{
		AwaitKiller = 0,
		AwaitDeath = 1,
	};
}
