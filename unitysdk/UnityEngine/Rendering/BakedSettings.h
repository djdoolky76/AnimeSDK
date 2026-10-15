#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) BakedSettings
	{
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 lodBias; // 0x14
		::System::Int32 dynamicLocallightCount; // 0x18
		::System::Boolean useCSDecompress; // 0x1C
	};
}
