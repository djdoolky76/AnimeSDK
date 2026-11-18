#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectLod_TypeDefinitionIndex = 27380;

	enum class SceneEffectLod : ::System::Int32
	{
		Middle = 2,
		VeryHigh = 0,
		Low = 3,
		High = 1,
	};
}
