#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 87595;

	enum class InlevelCameraState : ::System::Int32
	{
		Custom = 2,
		Normal = 0,
		MainCityNormal = 6,
		Fighting = 1,
		FightingLevel3 = 4,
		Observe = 5,
		MainCityIndoor = 7,
		FightingLevel2 = 3,
	};
}
