#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

#define ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x281F540)
#define ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_GET_CULLINGVOLUME_OFFSET UNITYSDK_OFFSET(0x18732A0)
#define ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x281F5D0)
#define ABC_CUSTOMRENDERPIPELINE_OCSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x27D8F00)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int OCSettings_TypeDefinitionIndex = 16878;

	class OCSettings : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Boolean m_Enabled; // 0x18
		::System::Boolean m_CullingVolume; // 0x19

		::System::Boolean get_cullingVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_GET_CULLINGVOLUME_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_SET_ENABLED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_OCSETTINGS_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}
	};
}
