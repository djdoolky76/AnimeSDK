#pragma once
#include "unitysdk/unitysdk.h"

namespace Octree::Native
{
	inline static constexpr unsigned int EnsureSizePolicy_TypeDefinitionIndex = 71028;

	enum class EnsureSizePolicy : ::System::Int32
	{
		ExceedRange = 0,
		AutoExtend = 1,
	};
}
