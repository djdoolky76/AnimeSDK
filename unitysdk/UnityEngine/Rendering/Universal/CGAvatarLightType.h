#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CGAvatarLightType_TypeDefinitionIndex = 27256;

	enum class CGAvatarLightType : ::System::UInt32
	{
		NoGradient = 1,
		AttenuationOnly = 2,
		Gradient = 0,
	};
}
