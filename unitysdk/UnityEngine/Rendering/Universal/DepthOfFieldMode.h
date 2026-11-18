#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldMode_TypeDefinitionIndex = 26432;

	enum class DepthOfFieldMode : ::System::Int32
	{
		Gaussian = 1,
		Off = 0,
		Bokeh = 2,
	};
}
