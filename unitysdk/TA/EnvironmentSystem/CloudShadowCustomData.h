#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector2; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_CLOUDSHADOWCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28867E0)
#define TA_ENVIRONMENTSYSTEM_CLOUDSHADOWCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2886A40)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int CloudShadowCustomData_TypeDefinitionIndex = 16185;

	class CloudShadowCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* cloudShadowTetxure; // 0x38
		::TA::EnvironmentSystem::ESVector2* textureTiling; // 0x40
		::TA::EnvironmentSystem::ESFloat* cloudShadowStrength; // 0x48
		::TA::EnvironmentSystem::ESFloat* cloudShadowThreshold; // 0x50
		::TA::EnvironmentSystem::ESVector2* cloudShadowMoveSpeed; // 0x58
		::TA::EnvironmentSystem::ESFloat* cloudShadowFade; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CLOUDSHADOWCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CLOUDSHADOWCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
