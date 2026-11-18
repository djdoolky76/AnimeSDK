#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 55670;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		None = 0,
		Elite = 3,
		NormalLevelUp = 2,
		Normal = 1,
	};
}
