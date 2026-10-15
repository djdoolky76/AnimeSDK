#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(8) CullingAllocationInfo
	{
		::PVOID visibleLightsPtr; // 0x10
		::PVOID visibleOffscreenVertexLightsPtr; // 0x18
		::PVOID visibleReflectionProbesPtr; // 0x20
		::System::Int32 visibleLightCount; // 0x28
		::System::Int32 visibleOffscreenVertexLightCount; // 0x2C
		::System::Int32 visibleReflectionProbeCount; // 0x30
	};
}
