#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Octree::Agent
{
	struct alignas(4) AgentNavigationParams
	{
		::System::Single Tolerance; // 0x10
	};
}
