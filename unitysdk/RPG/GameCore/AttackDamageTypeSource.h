#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AttackDamageTypeSource : ::System::Int32
	{
		Specify = 0,
		DamageData = 1,
		ReadTargetType = 2,
		ReadTargetTypeNew = 3,
		Random = 4,
		ReadTargetGather = 5,
	};
}
