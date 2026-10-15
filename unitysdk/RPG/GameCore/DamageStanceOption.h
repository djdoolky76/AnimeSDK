#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageStanceOption_TypeDefinitionIndex = 24684;

	enum class DamageStanceOption : ::System::UInt32
	{
		None = 0,
		ForceStanceDamage = 1,
		IgnoreAttackerAddRatio = 2,
	};
}
