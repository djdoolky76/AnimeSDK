#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateInterpolateType_TypeDefinitionIndex = 48948;

	enum class FrameRateInterpolateType : ::System::Int32
	{
		Low = 1,
		High = 3,
		None = 0,
		Middle = 2,
	};
}
