#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamTypeMask : ::System::UInt16
	{
		None = 0,
		All = 65535,
		TeamUnknow = 1,
		TeamLight = 2,
		TeamDark = 4,
		TeamNeutral = 8,
		TeamNPC = 16,
		SelfTeam = 32,
		EnemyTeam = 64,
		Mask_LightDark = 6,
	};
}
