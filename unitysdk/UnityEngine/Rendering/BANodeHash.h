#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) BANodeHash
	{
		::System::Int32 hash; // 0x10
		::System::Byte nodeType; // 0x14
		::System::SByte nodeIndex; // 0x15
		::System::UInt16 paramOffset; // 0x16
	};
}
