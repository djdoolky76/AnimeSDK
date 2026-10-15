#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPTestConfig
	{
		::System::UInt64 _Flag; // 0x10
	};
}
