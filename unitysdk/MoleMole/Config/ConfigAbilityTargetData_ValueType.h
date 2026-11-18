#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 72754;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		SummonByTagAbilityTarget = 3,
		TimelineAbilityTarget = 9,
		Null = 0,
		RangeEnemyAbilityTarget = 1,
		CommonAbilityTarget = 4,
		SummonerAbilityTarget = 8,
		EntityTypeGroupAbilityTarget = 6,
		TelerportSelectionTarget = 10,
		EntityTypeAbilityTarget = 5,
		RangeRandomEnemyAbilityTarget = 2,
		MultiTargettingAbilityTarget = 7,
	};
}
