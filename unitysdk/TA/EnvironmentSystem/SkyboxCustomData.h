#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESRamp; }
namespace TA::EnvironmentSystem { class ESVector4; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_SKYBOXCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2865AD0)
#define TA_ENVIRONMENTSYSTEM_SKYBOXCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2865CF0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int SkyboxCustomData_TypeDefinitionIndex = 15996;

	class SkyboxCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* skyboxExposure; // 0x38
		::TA::EnvironmentSystem::ESRamp* skyboxGradientColor; // 0x40
		::TA::EnvironmentSystem::ESBool* skyboxUseTexture; // 0x48
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* skyboxMap; // 0x50
		::TA::EnvironmentSystem::ESVector4* skyboxMapTillingOffset; // 0x58

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SKYBOXCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SKYBOXCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
