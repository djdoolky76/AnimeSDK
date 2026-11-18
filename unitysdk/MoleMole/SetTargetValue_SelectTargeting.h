#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValue_SelectTargeting_TypeDefinitionIndex = 87582;

	enum class SetTargetValue_SelectTargeting : ::System::Int32
	{
		SelectTarget = 3,
		LocalAvatar = 4,
		AllNeutral = 2,
		AllEnemy = 0,
		AllAllied = 1,
	};
}
