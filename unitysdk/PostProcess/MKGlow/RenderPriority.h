#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderPriority_TypeDefinitionIndex = 26790;

	enum class RenderPriority : ::System::Int32
	{
		Performance = 2,
		Quality = 0,
		Balanced = 1,
	};
}
