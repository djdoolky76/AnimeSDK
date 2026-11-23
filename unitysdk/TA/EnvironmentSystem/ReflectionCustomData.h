#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Cubemap; }

#define TA_ENVIRONMENTSYSTEM_REFLECTIONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2878DB0)
#define TA_ENVIRONMENTSYSTEM_REFLECTIONCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2878FA0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ReflectionCustomData_TypeDefinitionIndex = 16090;

	class ReflectionCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Cubemap*>* globalReflectionProbeCubemap; // 0x38
		::TA::EnvironmentSystem::ESFloat* globalReflectionProbeIntensity; // 0x40
		::TA::EnvironmentSystem::ESColor* reflectionProbeColor; // 0x48
		::TA::EnvironmentSystem::ESFloat* reflectionProbeIntensity; // 0x50
		::TA::EnvironmentSystem::ESColor* reflectionProbeFallbackColor; // 0x58
		::TA::EnvironmentSystem::ESFloat* ssrScreenFadeDist; // 0x60
		::TA::EnvironmentSystem::ESFloat* ssrIntensity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_REFLECTIONCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_REFLECTIONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
