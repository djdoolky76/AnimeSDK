#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Octree::Agent
{
	inline static constexpr unsigned int AgentCurveNavigationParams_TypeDefinitionIndex = 49960;

	struct alignas(4) AgentCurveNavigationParams
	{
		::System::Single Tolerance; // 0x10
		::System::Single PathTolerance; // 0x14
	};
}
