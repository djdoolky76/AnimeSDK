#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_RAINYSKYCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28EF9F0)
#define TA_ENVIRONMENTSYSTEM_RAINYSKYCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28EFC50)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int RainySkyCustomData_TypeDefinitionIndex = 16459;

	class RainySkyCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* rainySkyTex; // 0x38
		::TA::EnvironmentSystem::ESFloat* rainySkyTexBottomSpeed; // 0x40
		::TA::EnvironmentSystem::ESFloat* rainySkyTexMiddleSpeed; // 0x48
		::TA::EnvironmentSystem::ESFloat* rainySkyTexHighSpeed; // 0x50
		::TA::EnvironmentSystem::ESFloat* rainySkyBottom; // 0x58
		::TA::EnvironmentSystem::ESFloat* rainySkyMiddle; // 0x60
		::TA::EnvironmentSystem::ESFloat* rainySkyBottomToMiddleSmooth; // 0x68
		::TA::EnvironmentSystem::ESFloat* rainySkyMiddleToHighSmooth; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINYSKYCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINYSKYCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
