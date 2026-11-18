#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 8922;

	enum class ETickFunctionFlags : ::System::Byte
	{
		None = 0,
		ImmediateTick = 8,
		Default = 3,
		MergeTick = 1,
		VirtualTick = 4,
		PartialTick = 2,
	};
}
