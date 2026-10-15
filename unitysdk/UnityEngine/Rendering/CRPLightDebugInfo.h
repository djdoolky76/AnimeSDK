#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPLightDebugInfo
	{
		::System::Int32 profileType; // 0x10
		::System::UInt32 debugFlag; // 0x14
	};
}
