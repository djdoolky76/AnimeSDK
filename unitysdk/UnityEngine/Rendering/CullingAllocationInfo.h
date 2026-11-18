#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingAllocationInfo_TypeDefinitionIndex = 6257;

	struct alignas(8) CullingAllocationInfo
	{
		::PVOID visibleLightsPtr; // 0x10
		::PVOID visibleOffscreenVertexLightsPtr; // 0x18
		::PVOID visibleReflectionProbesPtr; // 0x20
		::PVOID localShadowCacheStaticUpdateRequestsPtr; // 0x28
		::PVOID localShadowCacheDynamicUpdateRequestsPtr; // 0x30
		::PVOID localShadowCacheShadowedLightsPtr; // 0x38
		::System::Int32 visibleLightCount; // 0x40
		::System::Int32 visibleOffscreenVertexLightCount; // 0x44
		::System::Int32 visibleReflectionProbeCount; // 0x48
		::System::Int32 localShadowCacheStaticUpdateRequestsWords; // 0x4C
		::System::Int32 localShadowCacheDynamicUpdateRequestsWords; // 0x50
		::System::Int32 localShadowCacheShadowedLightsWords; // 0x54
	};
}
