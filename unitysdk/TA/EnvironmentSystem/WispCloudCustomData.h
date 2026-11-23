#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_WISPCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28D57F0)
#define TA_ENVIRONMENTSYSTEM_WISPCLOUDCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28D5A50)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int WispCloudCustomData_TypeDefinitionIndex = 16314;

	class WispCloudCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* cloudWispTex; // 0x38
		::TA::EnvironmentSystem::ESColor* cloudLightColor; // 0x40
		::TA::EnvironmentSystem::ESColor* cloudDarkColor; // 0x48
		::TA::EnvironmentSystem::ESFloat* cloudWispTexSpeed; // 0x50
		::TA::EnvironmentSystem::ESFloat* cloudWispTexOffset; // 0x58
		::TA::EnvironmentSystem::ESFloat* cloudWispCoverage; // 0x60
		::TA::EnvironmentSystem::ESFloat* cloudWispOpacity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_WISPCLOUDCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_WISPCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
