#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Quality_TypeDefinitionIndex = 26668;

	enum class Quality : ::System::Int32
	{
		Ultra = 1,
		Low = 8,
		High = 2,
		VeryLow = 12,
		Medium = 4,
	};
}
