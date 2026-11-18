#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessWeightedSampleSum_GaussianBlurPassData_TypeDefinitionIndex = 26442;

	struct alignas(4) PostProcessWeightedSampleSum_GaussianBlurPassData
	{
		::UnityEngine::Rendering::RenderTargetIdentifier sourceRT; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier result; // 0x38
		::UnityEngine::Rendering::RenderTargetIdentifier additive; // 0x60
		::System::Boolean additiveActive; // 0x88
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2Int sourceRTSize; // 0x8C
		::System::Single KernelSizePercent; // 0x94
		::UnityEngine::Vector4 tintColor; // 0x98
		::UnityEngine::Vector2 CrossCenterWeight; // 0xA8
		::UnityEngine::Rendering::Universal::PP_Quality sampleQuality; // 0xB0
	};
}
