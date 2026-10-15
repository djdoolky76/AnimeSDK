#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPPreDevConfig
	{
		::System::Int32 DebugPlatform; // 0x10
		::System::Boolean GBufferDebug; // 0x14
	};
}
