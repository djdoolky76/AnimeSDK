#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_EAvatarDitherPhase_TypeDefinitionIndex = 39093;

	enum class MonoNPCCrowdGPUGroupController_EAvatarDitherPhase : ::System::Byte
	{
		FadingOut = 2,
		FadedOut = 3,
		PrepareFadeOut = 1,
		FadingIn = 5,
		PrepareFadeIn = 4,
		Visible = 0,
	};
}
