#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERLIGHTINGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x16E87350)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERLIGHTINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E87410)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideCharacterLightingConfig_TypeDefinitionIndex = 27134;

	class OverrideCharacterLightingConfig
	{
	public:
		::UnityEngine::Color mainLightColorForChara; // 0x18
		::System::Single mainLightIntensityForChara; // 0x28
		::System::Single mainLightShadowStrengthForChara; // 0x2C
		::System::Single rimGlowIntensityForChara; // 0x30
		::UnityEngine::Color ambient; // 0x34
		::UnityEngine::Color mainLightColorForCharaIndoor; // 0x44
		::System::Single mainLightIntensityForCharaIndoor; // 0x54
		::System::Single mainLightShadowStrengthForCharaIndoor; // 0x58
		::System::Single rimGlowIntensityForCharaIndoor; // 0x5C
		::UnityEngine::Color ambientIndoor; // 0x60
		::System::Boolean characterColorGradingEnabled; // 0x70
		::System::Byte _padding0[0x3];
		::System::Single characterPostExposure; // 0x74
		::System::Single contrast; // 0x78
		::System::Single saturation; // 0x7C
		::System::Single characterPostExposureIndoor; // 0x80
		::System::Single contrastIndoor; // 0x84
		::System::Single saturationIndoor; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERLIGHTINGCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig* DoLerp(::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig* from, ::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig*, ::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERLIGHTINGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
