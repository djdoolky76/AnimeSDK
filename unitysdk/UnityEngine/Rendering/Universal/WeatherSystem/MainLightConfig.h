#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_MAINLIGHTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1CF96D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_MAINLIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96FB0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int MainLightConfig_TypeDefinitionIndex = 26506;

	class MainLightConfig
	{
	public:
		::System::Boolean mainLightDirTimeOfDay; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 mainLightDir; // 0x1C
		::UnityEngine::Color mainLightColor; // 0x28
		::System::Single mainLightIntensity; // 0x38
		::System::Single interiorDayAndNight; // 0x3C
		::System::Single interiorSmoothnessScale; // 0x40
		::System::Boolean mainLightShadowTint; // 0x44
		::System::Byte _padding1[0x3];
		::UnityEngine::Color mainLightShadowTintColor; // 0x48
		::System::Single mainLightShadowTintSourceAngle; // 0x58
		::System::Single mainLightShadowTintPower; // 0x5C
		::System::Single mainLightShadowTintRadius; // 0x60
		::System::Single mainLightShadowTintRadiusPower; // 0x64
		::System::Single mainLightShadowTintDepthBias; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_MAINLIGHTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_MAINLIGHTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
