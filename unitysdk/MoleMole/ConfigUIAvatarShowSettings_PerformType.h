#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettings_PerformType_TypeDefinitionIndex = 82390;

	enum class ConfigUIAvatarShowSettings_PerformType : ::System::Byte
	{
		TimelinePrefab = 1,
		AnimationClip = 0,
		AnimatorController = 2,
	};
}
