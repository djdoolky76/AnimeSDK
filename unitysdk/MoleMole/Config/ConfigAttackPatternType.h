#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackPatternType_TypeDefinitionIndex = 77000;

	enum class ConfigAttackPatternType : ::System::Int32
	{
		ContinuousAttackPatternList = 2,
		AttackPattern = 0,
		AttackPatternList = 1,
	};
}
