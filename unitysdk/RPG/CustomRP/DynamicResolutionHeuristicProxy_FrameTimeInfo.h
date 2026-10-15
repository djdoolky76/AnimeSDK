#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	struct alignas(4) DynamicResolutionHeuristicProxy_FrameTimeInfo
	{
		::System::Single CPUTime; // 0x10
		::System::Single GPUTime; // 0x14
		::System::Single RenderScale; // 0x18
	};
}
