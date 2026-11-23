#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector2; }

#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_CALCULATEINCLINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x28EE8B0)
#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_CALCULATEPOSITION_OFFSET UNITYSDK_OFFSET(0x28EE9C0)
#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28EEAF0)
#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x28EED00)
#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28EF7F0)
#define TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA___IFIXBASEPROXY_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x28EF7E0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int OrbitCustomData_TypeDefinitionIndex = 16449;

	class OrbitCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* orbitRadius; // 0x38
		::TA::EnvironmentSystem::ESFloat* sunTheta; // 0x40
		::TA::EnvironmentSystem::ESFloat* sunInclination; // 0x48
		::TA::EnvironmentSystem::ESVector2* sunPitchOffset; // 0x50
		::TA::EnvironmentSystem::ESFloat* moonTheta; // 0x58
		::TA::EnvironmentSystem::ESFloat* moonInclination; // 0x60
		::TA::EnvironmentSystem::ESVector2* moonPitchOffset; // 0x68
		::System::Boolean DebugTrail; // 0x70

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::UnityEngine::Vector3 CalculatePosition(::System::Single ED57D68611DE2FF1, ::System::Single B05CCB8C747C9930)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_CALCULATEPOSITION_OFFSET))(this, ED57D68611DE2FF1, B05CCB8C747C9930);
		}

		::System::Void CalculateInclinationPosition(::System::Single ED57D68611DE2FF1, ::System::Single F99C308059D19B44, ::System::Single B05CCB8C747C9930, ::UnityEngine::Vector3& BDB40B7CE57CDE1B, ::UnityEngine::Vector3& B0062FE759546847)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA_CALCULATEINCLINATIONPOSITION_OFFSET))(this, ED57D68611DE2FF1, F99C308059D19B44, B05CCB8C747C9930, BDB40B7CE57CDE1B, B0062FE759546847);
		}

		::System::Void __iFixBaseProxy_OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ORBITCUSTOMDATA___IFIXBASEPROXY_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
