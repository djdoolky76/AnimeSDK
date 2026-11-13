#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Octree::Agent
{
	inline static constexpr unsigned int AgentNavigationParams_TypeDefinitionIndex = 49962;

	struct alignas(4) AgentNavigationParams
	{
		::System::Single Tolerance; // 0x10
	};
}
