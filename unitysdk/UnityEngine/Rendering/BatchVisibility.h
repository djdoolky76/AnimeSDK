#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) BatchVisibility
	{
		::System::Int32 offset; // 0x10
		::System::Int32 instancesCount; // 0x14
		::System::Int32 visibleCount; // 0x18
	};
}
