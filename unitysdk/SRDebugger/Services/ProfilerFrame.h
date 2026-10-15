#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger::Services
{
	struct alignas(4) ProfilerFrame
	{
		::System::Double FrameTime; // 0x10
		::System::Double OtherTime; // 0x18
		::System::Double RenderTime; // 0x20
		::System::Double UpdateTime; // 0x28
	};
}
