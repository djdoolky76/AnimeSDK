#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_CustomRuleType_TypeDefinitionIndex = 62060;

	enum class RuntimeGroupManager_HoYoGroupUnit_CustomRuleType : ::System::UInt32
	{
		RotatablePose = 0,
		RotatableRegion = 1,
		WolfBro = 2,
		FiveDim = 3,
		PlatformQuality = 4,
	};
}
