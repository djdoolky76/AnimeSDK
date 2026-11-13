#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int OutlineOccluderMode_TypeDefinitionIndex = 52804;

	enum class OutlineOccluderMode : ::System::Int32
	{
		TruncateOnly = 0,
		TruncateAndStitch = 1,
	};
}
