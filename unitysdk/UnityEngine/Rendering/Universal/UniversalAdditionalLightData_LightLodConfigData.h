#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightData_LightLodConfigData_TypeDefinitionIndex = 27123;

	struct alignas(8) UniversalAdditionalLightData_LightLodConfigData
	{
		::System::Boolean cameraUnderGround; // 0x10
		::System::Boolean cameraUpGround; // 0x11
		::System::Byte _padding0[0x6];
		::UnityEngine::Transform* trigger; // 0x18
		::UnityEngine::Rendering::Universal::LightLodQuality quality; // 0x20
		::System::Single maxRangeMultiply; // 0x24
		::System::Single globalLightLodBias; // 0x28
		::System::Int32 lightLodCameraCullingMask; // 0x2C
		::System::Boolean triggerActive; // 0x30
		::System::Boolean isRTXActive; // 0x31
		::System::Boolean supportsAdditionalLightShadows; // 0x32
	};
}
