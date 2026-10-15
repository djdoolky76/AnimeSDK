#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPProbeDebugInfo
	{
		::System::Int32 profileType; // 0x10
	};
}
