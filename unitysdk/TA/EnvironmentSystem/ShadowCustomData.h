#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ABEBA93AD61764EF;
namespace UnityEngine { class VirtualShadowMap; }

#define TA_ENVIRONMENTSYSTEM_SHADOWCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x287C1D0)
#define TA_ENVIRONMENTSYSTEM_SHADOWCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x287C3F0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ShadowCustomData_TypeDefinitionIndex = 16079;

	class ShadowCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::UnityEngine::VirtualShadowMap* VSMDay; // 0x38
		::UnityEngine::VirtualShadowMap* VSMNight; // 0x40
		::UnityEngine::VirtualShadowMap* VSMDay_Mobile; // 0x48
		::UnityEngine::VirtualShadowMap* VSMNight_Mobile; // 0x50
		::UnityEngine::Vector2 DayTime; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SHADOWCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SHADOWCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
