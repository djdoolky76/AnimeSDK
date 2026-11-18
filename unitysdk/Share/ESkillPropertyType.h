#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESkillPropertyType_TypeDefinitionIndex = 9234;

	enum class ESkillPropertyType : ::System::UInt16
	{
		StunRatio = 1002,
		DamageRate = 1001,
		SpRecovery = 1003,
		EpRecovery = 1005,
		RpRecovery = 1004,
	};
}
