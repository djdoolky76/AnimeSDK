#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodQuality_TypeDefinitionIndex = 26680;

	enum class LightLodQuality : ::System::Int32
	{
		Disable = -1,
		Middle = 2,
		Low = 3,
		VeryHigh = 0,
		High = 1,
	};
}
