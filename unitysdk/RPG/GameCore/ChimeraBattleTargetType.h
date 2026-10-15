#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraBattleTargetType : ::System::Int32
	{
		None = 0,
		Self = 1,
		OtherTeammate = 2,
		Work = 3,
		TriggerAbilityTarget = 4,
		CopyAbilityTarget = 5,
	};
}
