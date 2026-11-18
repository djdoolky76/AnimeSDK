#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ShadowResolution_TypeDefinitionIndex = 5228;

	enum class ShadowResolution : ::System::Int32
	{
		Low = 0,
		Medium = 1,
		High = 2,
		VeryHigh = 3,
	};
}
