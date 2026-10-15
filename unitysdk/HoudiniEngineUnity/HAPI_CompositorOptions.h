#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_CompositorOptions
	{
		::System::Int32 maximumResolutionX; // 0x10
		::System::Int32 maximumResolutionY; // 0x14
	};
}
