#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKACEMGMEKG.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DelayChangeLight_TypeDefinitionIndex = 26988;

	struct alignas(8) DelayChangeLight
	{
		::OKACEMGMEKG delayOpt; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData; // 0x18
	};
}
