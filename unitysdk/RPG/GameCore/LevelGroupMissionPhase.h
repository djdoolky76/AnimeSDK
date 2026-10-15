#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelGroupMissionPhase : ::System::Int32
	{
		Accept = 0,
		Finish = 1,
		Cancel = 2,
	};
}
