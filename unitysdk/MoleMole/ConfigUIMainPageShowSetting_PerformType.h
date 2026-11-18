#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShowSetting_PerformType_TypeDefinitionIndex = 40030;

	enum class ConfigUIMainPageShowSetting_PerformType : ::System::Byte
	{
		AnimationClip = 0,
		AnimatorController = 2,
		TimelinePrefab = 1,
	};
}
