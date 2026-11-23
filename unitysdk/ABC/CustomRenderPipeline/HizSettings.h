#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

#define ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x2819240)
#define ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x27D8F00)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int HizSettings_TypeDefinitionIndex = 16899;

	class HizSettings : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Boolean m_Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_HIZSETTINGS_GET_ENABLED_OFFSET))(this);
		}
	};
}
