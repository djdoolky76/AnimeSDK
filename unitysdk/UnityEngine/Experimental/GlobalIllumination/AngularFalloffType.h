#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int AngularFalloffType_TypeDefinitionIndex = 6329;

	enum class AngularFalloffType : ::System::Byte
	{
		LUT = 0,
		AnalyticAndInnerAngle = 1,
	};
}
