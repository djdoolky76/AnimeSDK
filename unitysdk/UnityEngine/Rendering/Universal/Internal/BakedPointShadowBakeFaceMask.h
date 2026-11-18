#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowBakeFaceMask_TypeDefinitionIndex = 26973;

	enum class BakedPointShadowBakeFaceMask : ::System::Int32
	{
		NegativeY = 8,
		None = 0,
		All = 63,
		PositiveY = 4,
		NegativeX = 2,
		NegativeZ = 32,
		PositiveX = 1,
		PositiveZ = 16,
		HorizontalRing = 51,
	};
}
