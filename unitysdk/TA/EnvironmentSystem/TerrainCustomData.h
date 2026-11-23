#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }

#define TA_ENVIRONMENTSYSTEM_TERRAINCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C1270)
#define TA_ENVIRONMENTSYSTEM_TERRAINCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C1390)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int TerrainCustomData_TypeDefinitionIndex = 16266;

	class TerrainCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESBool* EnableHeightfieldDeformation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TERRAINCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TERRAINCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
