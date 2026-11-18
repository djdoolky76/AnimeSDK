#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_ReflectionSourceSelectionMode_TypeDefinitionIndex = 26137;

	enum class WaterProxy_ReflectionSourceSelectionMode : ::System::Int32
	{
		CubemapArrayId = 1,
		CustomCubemap = 0,
		MaxWeightCubemapArrayId = 2,
	};
}
