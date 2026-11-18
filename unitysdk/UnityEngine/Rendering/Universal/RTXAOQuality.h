#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOQuality_TypeDefinitionIndex = 26299;

	enum class RTXAOQuality : ::System::Int32
	{
		High = 2,
		Low = 0,
		Midium = 1,
		Disable = -1,
	};
}
