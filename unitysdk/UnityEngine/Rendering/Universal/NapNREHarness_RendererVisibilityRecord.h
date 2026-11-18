#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_RendererVisibilityRecord_TypeDefinitionIndex = 26862;

	struct alignas(4) NapNREHarness_RendererVisibilityRecord
	{
		::System::Int32 rootInstanceID; // 0x10
		::System::Int32 rendererInstanceID; // 0x14
		::System::Int64 nativeRendererHandle; // 0x18
		::System::Int32 rendererIndex; // 0x20
		::System::Boolean queryValid; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 queryIndex; // 0x28
		::System::Boolean queryResult; // 0x2C
		::System::Boolean usedFallback; // 0x2D
		::System::Boolean effectiveVisibilityInput; // 0x2E
		::System::Boolean isAlive; // 0x2F
		::System::Boolean visibleInCurrentCam; // 0x30
	};
}
