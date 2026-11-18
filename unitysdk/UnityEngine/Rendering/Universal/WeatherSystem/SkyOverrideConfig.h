#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYOVERRIDECONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1EA55470)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA557A0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SkyOverrideConfig_TypeDefinitionIndex = 26501;

	class SkyOverrideConfig
	{
	public:
		::UnityEngine::Material* replaceSkybox; // 0x18
		::UnityEngine::Material* hollowCoverMat; // 0x20
		::UnityEngine::Mesh* customSkyboxMesh; // 0x28
		::UnityEngine::Mesh* hollowCoverMesh; // 0x30
		::System::Single hollowCoverSize; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* sceneEtherCoverEffectMat; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyOverrideConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYOVERRIDECONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
