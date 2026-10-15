#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamTowersStageType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Survival = 2,
		Race = 3,
		Endless = 4,
	};
}
