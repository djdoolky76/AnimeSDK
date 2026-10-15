#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DamageStanceOption : ::System::UInt32
	{
		None = 0,
		ForceStanceDamage = 1,
		IgnoreAttackerAddRatio = 2,
	};
}
