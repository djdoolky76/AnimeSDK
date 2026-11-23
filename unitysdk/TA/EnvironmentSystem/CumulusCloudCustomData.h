#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector4; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_CUMULUSCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28AEFC0)
#define TA_ENVIRONMENTSYSTEM_CUMULUSCLOUDCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28AF2C0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int CumulusCloudCustomData_TypeDefinitionIndex = 16251;

	class CumulusCloudCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* cloudTexture; // 0x38
		::TA::EnvironmentSystem::ESVector4* cloudTextureTillingOffset; // 0x40
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* cloudDistortTexture; // 0x48
		::TA::EnvironmentSystem::ESVector4* cloudDistortTillingOffset; // 0x50
		::TA::EnvironmentSystem::ESFloat* cloudRotationSpeed; // 0x58
		::TA::EnvironmentSystem::ESColor* cloudLightColor; // 0x60
		::TA::EnvironmentSystem::ESColor* cloudShadowColor; // 0x68
		::TA::EnvironmentSystem::ESFloat* cloudLightAttenRange; // 0x70
		::TA::EnvironmentSystem::ESFloat* cloudSunLightRange; // 0x78
		::TA::EnvironmentSystem::ESFloat* cloudSunLightFalloff; // 0x80
		::TA::EnvironmentSystem::ESFloat* cloudSunLightIntensity; // 0x88
		::TA::EnvironmentSystem::ESFloat* cloudAlpha; // 0x90
		::TA::EnvironmentSystem::ESFloat* cloudEdgeIntensity; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CUMULUSCLOUDCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CUMULUSCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
