#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0x15AF04A0)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEFF00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 58630;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture* cloudShadow; // 0x10
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x18
		::WeatherConfig* weatherCfg; // 0x20
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0x28
		::System::Boolean hasLightFogProxy; // 0x29
		::System::Boolean fogUseOldVersion; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single cloudOffsetY; // 0x2C
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x30
		::System::Single volumetricFog_IntensityTowardLight; // 0x34
		::System::Single rippleDensity; // 0x38
		::System::Single rippleSpeed; // 0x3C
		::System::Single cloudLightMaxIntervalTime; // 0x40
		::System::Single cloudLightMinIntervalTime; // 0x44
		::UnityEngine::Color GIColorOffset; // 0x48
		::UnityEngine::Color fogMieColor; // 0x58
		::System::Single rippleFoamIntensity; // 0x68
		::System::Single lightFogSoftParticleFadeFactor; // 0x6C
		::System::Int32 rainDropBatchCount; // 0x70
		::UnityEngine::Vector3 moonDir; // 0x74
		::System::Single volumetricFog_Jittering; // 0x80
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x84
		::System::Single EmissionIntensity; // 0x8C
		::System::Single fogStartDistance; // 0x90
		::System::Single cloudLightStrength; // 0x94
		::System::Single cloudLightDurationTime; // 0x98
		::UnityEngine::Vector2 fogHeightRange; // 0x9C
		::System::Single volumetricFog_DustIntensity; // 0xA4
		::UnityEngine::Color groundColor; // 0xA8
		::System::Single fogMieG; // 0xB8
		::System::Single skyIntensity; // 0xBC
		::System::Single cloudShadowIntensity; // 0xC0
		::System::Single volumetricFogSize; // 0xC4
		::UnityEngine::Color volumetricFog_Color; // 0xC8
		::System::Single cloudLightWidth; // 0xD8
		::UnityEngine::Color middleColor; // 0xDC
		::System::Boolean hasGlobalVolumetricFog; // 0xEC
		::System::Boolean mainLightShadowTint; // 0xED
		::System::Boolean cloudGodRay; // 0xEE
		::System::Boolean EnableAutoExposure; // 0xEF
		::System::Single AutoExposureCompensation; // 0xF0
		::System::Single FallbackConstantExposureCompensation; // 0xF4
		::UnityEngine::Color fogExtinctColor; // 0xF8
		::System::Single volumetricFog_MaxIntensity; // 0x108
		::System::Single FogDensity; // 0x10C
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x110
		::System::Single volumetricFog_ExtraBlurValue; // 0x114
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x118
		::System::Single mainLightIntensityForChara; // 0x128
		::System::Int32 rainSplashCount; // 0x12C
		::System::Single cloudBaseRot; // 0x130
		::UnityEngine::Color skyColor; // 0x134
		::System::Single dynamicObjectGIIntensity; // 0x144
		::UnityEngine::Vector3 cloudShadowRotation; // 0x148
		::UnityEngine::Color fogRayColor; // 0x154
		::System::Single GIIntensity; // 0x164
		::System::Single rainSplashRange; // 0x168
		::System::Single volumetricFog_Dithering; // 0x16C
		::System::Single volumetricFog_Step; // 0x170
		::System::Single mainLightIntensity; // 0x174
		::System::Single lightFogMaxDensity; // 0x178
		::System::Single volumetricFog_PunctualLightFadePower; // 0x17C
		::System::Single expHeightfogDensity; // 0x180
		::System::Single IBLIntensity; // 0x184
		::System::Single fogScattering; // 0x188

		::System::Void _ctor(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET))(this, weatherConfig);
		}

		::System::Void RecoverVisualEnvConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET))(this);
		}
	};
}
