#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
class F0FAC2AD8D483D27;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }

#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2872CF0)
#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x28739B0)
#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_GET_MAINLIGHT_OFFSET UNITYSDK_OFFSET(0x286E020)
#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_SETUPPARAMS_OFFSET UNITYSDK_OFFSET(0x2872E90)
#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2873570)
#define TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA__SETUPPARAMS_G__RAYORIGINTERM_24_0_OFFSET UNITYSDK_OFFSET(0x2873480)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int HeightFogCustomData_TypeDefinitionIndex = 16118;

	class HeightFogCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* heightFogColor; // 0x38
		::TA::EnvironmentSystem::ESFloat* fogDensity; // 0x40
		::TA::EnvironmentSystem::ESFloat* fogHeightFalloff; // 0x48
		::TA::EnvironmentSystem::ESFloat* fogHeight; // 0x50
		::TA::EnvironmentSystem::ESFloat* fogMaxOpacity; // 0x58
		::TA::EnvironmentSystem::ESFloat* startDistance; // 0x60
		::TA::EnvironmentSystem::ESFloat* fogCutoffDistance; // 0x68
		::TA::EnvironmentSystem::ESFloat* directionalInscatteringStartDistance; // 0x70
		::TA::EnvironmentSystem::ESFloat* directionalInscatteringStartTransition; // 0x78
		::TA::EnvironmentSystem::ESFloat* directionalInscatteringExponent; // 0x80
		::TA::EnvironmentSystem::ESColor* directionalInscatteringColor; // 0x88
		::TA::EnvironmentSystem::ESFloat* directionalInscatteringIntensity; // 0x90
		::TA::EnvironmentSystem::ESFloat* fogColorBlending; // 0x98
		::TA::EnvironmentSystem::ESBool* enableSecondExponentialHeightFog; // 0xA0
		::TA::EnvironmentSystem::ESFloat* fogDensitySecond; // 0xA8
		::TA::EnvironmentSystem::ESFloat* fogHeightFalloffSecond; // 0xB0
		::TA::EnvironmentSystem::ESFloat* fogHeightSecond; // 0xB8
		::TA::EnvironmentSystem::ESBool* enableSkyHeightFog; // 0xC0
		::TA::EnvironmentSystem::ESFloat* fogPower; // 0xC8

		::System::Void SetupParams(::F0FAC2AD8D483D27*& F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::F0FAC2AD8D483D27*&, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_SETUPPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_GET_CAMERA_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Single _SetupParams_g__RayOriginTerm_24_0(::System::Single A855A2BD85572975, ::System::Single A93BD6E1F5490001, ::System::Single ECD92E252D2F1C51)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA__SETUPPARAMS_G__RAYORIGINTERM_24_0_OFFSET))(this, A855A2BD85572975, A93BD6E1F5490001, ECD92E252D2F1C51);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::UnityEngine::Light* get_MainLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HEIGHTFOGCUSTOMDATA_GET_MAINLIGHT_OFFSET))(this);
		}
	};
}
