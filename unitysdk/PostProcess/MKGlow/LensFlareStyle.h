#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int LensFlareStyle_TypeDefinitionIndex = 26149;

	enum class LensFlareStyle : ::System::Int32
	{
		Distorted = 5,
		Average = 1,
		Custom = 0,
		Old = 3,
		OldFocused = 4,
		MultiAverage = 2,
	};
}
