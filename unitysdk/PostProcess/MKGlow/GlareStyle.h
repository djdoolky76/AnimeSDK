#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int GlareStyle_TypeDefinitionIndex = 26613;

	enum class GlareStyle : ::System::Int32
	{
		Line = 1,
		Custom = 0,
		Flake = 6,
		Star = 5,
		Tri = 2,
		DistortedCross = 4,
		Cross = 3,
	};
}
