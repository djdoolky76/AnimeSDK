#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightType_TypeDefinitionIndex = 6326;

	enum class LightType : ::System::Byte
	{
		Directional = 0,
		Point = 1,
		Spot = 2,
		Rectangle = 3,
		Disc = 4,
		SpotPyramidShape = 5,
		SpotBoxShape = 6,
	};
}
