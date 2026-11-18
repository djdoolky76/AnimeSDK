#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GIConfig_BrightnessFetchType_TypeDefinitionIndex = 26160;

	enum class GIConfig_BrightnessFetchType : ::System::Int32
	{
		Luminance = 1,
		HSV = 0,
	};
}
