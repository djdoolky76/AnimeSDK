#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationOption_TypeDefinitionIndex = 16585;

	enum class CustomTeamFormationOption : ::System::UInt32
	{
		None = 0,
		IgnoreOverrideConfig = 1,
		IgnoreFollowSummoner = 2,
		ExcludeInCustomFromation = 4,
		ExcludeWhenCalcCenterPos = 8,
		DitherIfBlockOtherCharacter = 16,
	};
}
