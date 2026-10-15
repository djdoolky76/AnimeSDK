#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) ShaderGroupAlloc
	{
		::System::Int32 shaderID; // 0x10
		::System::Int32 groupCount; // 0x14
	};
}
