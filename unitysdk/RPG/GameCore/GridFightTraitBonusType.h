#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightTraitBonusType : ::System::Int32
	{
		None = 0,
		Bonus = 1,
		Enhance = 2,
		TraitMemberPropertyRatio = 3,
		AllMemberPropertyRatio = 4,
	};
}
