#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectQuality_TypeDefinitionIndex = 26185;

	enum class SceneEffectQuality : ::System::Int32
	{
		High = 2,
		VeryHigh = 3,
		Middle = 1,
		Low = 0,
	};
}
