#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SpecialSetting.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_GET_SPECIALSETTING_OFFSET UNITYSDK_OFFSET(0x1DB9DF60)
#define SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9DF50)

namespace System::Configuration
{
	inline static constexpr unsigned int SpecialSettingAttribute_TypeDefinitionIndex = 4231;

	class SpecialSettingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Configuration::SpecialSetting specialSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SpecialSetting))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE__CTOR_OFFSET))(this, specialSetting);
		}

		::System::Configuration::SpecialSetting get_SpecialSetting()
		{
			return ((::System::Configuration::SpecialSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_GET_SPECIALSETTING_OFFSET))(this);
		}
	};
}
