#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ProjectileState : ::System::Int32
	{
		Alive = 0,
		Hit = 1,
		Finish = 2,
		AfterProcessWillDestroy = 3,
	};
}
