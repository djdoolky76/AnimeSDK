#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) AstraFXResource_BufferInfo
	{
		::System::Int32 count; // 0x10
		::System::Int32 stride; // 0x14
	};
}
