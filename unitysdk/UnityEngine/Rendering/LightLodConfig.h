#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) LightLodConfig
	{
		::System::Int32 lightLod; // 0x10
		::System::Single rangeMin; // 0x14
		::System::Single rangeMax; // 0x18
	};
}
