#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_RAINWETAREACUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2865430)
#define TA_ENVIRONMENTSYSTEM_RAINWETAREACUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28655D0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int RainWetAreaCustomData_TypeDefinitionIndex = 16067;

	class RainWetAreaCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* rainWetAreaTex; // 0x38
		::TA::EnvironmentSystem::ESFloat* rainWetAreaUniformTilling; // 0x40

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINWETAREACUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINWETAREACUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
