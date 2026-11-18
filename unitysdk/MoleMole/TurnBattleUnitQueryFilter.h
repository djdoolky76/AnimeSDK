#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryFilter_TypeDefinitionIndex = 77900;

	enum class TurnBattleUnitQueryFilter : ::System::Int32
	{
		EnemyNoDummyNoTemp = 2,
		All = 0,
		AllyNoDummyNoTemp = 1,
	};
}
