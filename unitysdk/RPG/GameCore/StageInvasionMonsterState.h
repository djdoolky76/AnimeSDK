#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StageInvasionMonsterState : ::System::Int32
	{
		Normal = 0,
		Activated = 1,
		Disable = 2,
	};
}
