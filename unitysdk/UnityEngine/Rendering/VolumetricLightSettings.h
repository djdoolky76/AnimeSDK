#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) VolumetricLightSettings
	{
		::System::Single BilateralWeight; // 0x10
		::System::Single ResolutionScale; // 0x14
		::System::Int32 SortingLayerID; // 0x18
		::System::Int32 OrderInLayer; // 0x1C
	};
}
