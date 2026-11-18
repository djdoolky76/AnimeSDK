#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EVREffectDrawOrderType_TypeDefinitionIndex = 26474;

	enum class PostProcessPass_EVREffectDrawOrderType : ::System::Int32
	{
		PostUberVREffectWithVRDistortion = 3,
		PostUberVREffectNoDistortion = 2,
		None = 1,
		PreUberVREffectNoDistortion = 0,
	};
}
