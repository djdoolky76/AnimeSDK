#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightProperties_TypeDefinitionIndex = 26400;

	enum class AddLightProperties : ::System::Int32
	{
		Count = 4,
		distanceAndSpotAttenuation = 2,
		positionWS_halfInvSmoothness = 0,
		colorForCharacter = 3,
		forward = 1,
	};
}
