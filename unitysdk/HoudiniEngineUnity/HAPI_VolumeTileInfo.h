#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_VolumeTileInfo
	{
		::System::Int32 minX; // 0x10
		::System::Int32 minY; // 0x14
		::System::Int32 minZ; // 0x18
		::System::Boolean isValid; // 0x1C
	};
}
