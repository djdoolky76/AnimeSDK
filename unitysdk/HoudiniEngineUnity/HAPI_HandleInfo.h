#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_HandleInfo
	{
		::System::Int32 nameSH; // 0x10
		::System::Int32 typeNameSH; // 0x14
		::System::Int32 bindingsCount; // 0x18
	};
}
