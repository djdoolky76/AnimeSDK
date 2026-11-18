#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/System/Attribute.h"

#define CONFIGMODULELIB_RUNTIME_CONFIGLOADPHASEATTRIBUTE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1F7D2CF0)
#define CONFIGMODULELIB_RUNTIME_CONFIGLOADPHASEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D2D00)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigLoadPhaseAttribute_TypeDefinitionIndex = 8308;

	class ConfigLoadPhaseAttribute : public ::System::Attribute
	{
	public:
		::ConfigModuleLib::Runtime::LoadPhase _Phase_k__BackingField; // 0x10

		::System::Void _ctor(::ConfigModuleLib::Runtime::LoadPhase phase)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGLOADPHASEATTRIBUTE__CTOR_OFFSET))(this, phase);
		}

		::ConfigModuleLib::Runtime::LoadPhase get_Phase()
		{
			return ((::ConfigModuleLib::Runtime::LoadPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGLOADPHASEATTRIBUTE_GET_PHASE_OFFSET))(this);
		}
	};
}
