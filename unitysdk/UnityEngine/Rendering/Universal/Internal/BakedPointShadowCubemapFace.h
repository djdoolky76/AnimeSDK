#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowCubemapFace_TypeDefinitionIndex = 26162;

	enum class BakedPointShadowCubemapFace : ::System::Int32
	{
		NegativeY = 3,
		NegativeZ = 5,
		PositiveZ = 4,
		NegativeX = 1,
		PositiveY = 2,
		PositiveX = 0,
	};
}
