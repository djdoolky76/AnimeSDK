#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYVFXCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1CA7F930)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYVFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7FB30)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SkyVFXConfig_TypeDefinitionIndex = 26650;

	class SkyVFXConfig
	{
	public:
		::System::Single SkyCoverMoveSpeed; // 0x18
		::UnityEngine::Color SkyCoverColor; // 0x1C
		::System::Boolean useAnimatedSkyCover; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single skyCoverAnimationDeltaTime; // 0x30
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* skyCoverAlphaAnimation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYVFXCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyVFXConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYVFXCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
