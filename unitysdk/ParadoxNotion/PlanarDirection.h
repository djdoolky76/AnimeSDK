#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PlanarDirection_TypeDefinitionIndex = 30052;

	enum class PlanarDirection : ::System::Int32
	{
		Vertical = 1,
		Horizontal = 0,
		Auto = 2,
	};
}
