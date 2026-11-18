#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int FalloffType_TypeDefinitionIndex = 6328;

	enum class FalloffType : ::System::Byte
	{
		InverseSquared = 0,
		InverseSquaredNoRangeAttenuation = 1,
		Linear = 2,
		Legacy = 3,
		Undefined = 4,
	};
}
