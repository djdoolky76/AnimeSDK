#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 27065;

	enum class AddLightMode : ::System::UInt32
	{
		DirectionOverride = 4,
		Toon = 3,
		Ambient = 2,
		Blend = 1,
	};
}
