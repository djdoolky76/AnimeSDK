#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATAEXTENSIONV1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A81F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightDataExtensionV1_2_TypeDefinitionIndex = 27027;

	template <typename T1, typename T2>
	class UniversalAdditionalLightDataExtensionV1_2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableHalfLambert; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single halfLambertIntensity; // 0x1C
		::System::Boolean isLightMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATAEXTENSIONV1_2__CTOR_OFFSET))(this);
		}
	};
}
