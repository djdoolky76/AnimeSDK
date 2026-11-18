#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 76623;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		KillMonsterNormalLevelUp = 2,
		KillMonsterElite = 3,
		KillMonsterNormal = 1,
		None = 0,
		ExPunch = 5,
		PerfectDodge = 4,
	};
}
