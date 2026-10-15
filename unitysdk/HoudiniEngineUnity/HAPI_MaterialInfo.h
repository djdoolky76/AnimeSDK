#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_MaterialInfo
	{
		::System::Int32 nodeId; // 0x10
		::System::Boolean exists; // 0x14
		::System::Boolean hasChanged; // 0x15
	};
}
