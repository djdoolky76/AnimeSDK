#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/UnloadPhase.h"
#include "unitysdk/System/Attribute.h"

#define CONFIGMODULELIB_RUNTIME_CONFIGUNLOADPHASEATTRIBUTE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1DB01950)
#define CONFIGMODULELIB_RUNTIME_CONFIGUNLOADPHASEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01960)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigUnloadPhaseAttribute_TypeDefinitionIndex = 8680;

	class ConfigUnloadPhaseAttribute : public ::System::Attribute
	{
	public:
		::ConfigModuleLib::Runtime::UnloadPhase _Phase_k__BackingField; // 0x10

		::System::Void _ctor(::ConfigModuleLib::Runtime::UnloadPhase phase)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::UnloadPhase))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGUNLOADPHASEATTRIBUTE__CTOR_OFFSET))(this, phase);
		}

		::ConfigModuleLib::Runtime::UnloadPhase get_Phase()
		{
			return ((::ConfigModuleLib::Runtime::UnloadPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGUNLOADPHASEATTRIBUTE_GET_PHASE_OFFSET))(this);
		}
	};
}
