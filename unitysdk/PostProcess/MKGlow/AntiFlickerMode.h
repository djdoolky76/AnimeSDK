#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int AntiFlickerMode_TypeDefinitionIndex = 27180;

	enum class AntiFlickerMode : ::System::Int32
	{
		Strong = 1,
		Balanced = 0,
	};
}
