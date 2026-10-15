#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Octree::Agent
{
	struct alignas(4) AgentCurveNavigationParams
	{
		::System::Single Tolerance; // 0x10
		::System::Single PathTolerance; // 0x14
	};
}
