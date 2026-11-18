#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/SettingAttribute.h"

#define SYSTEM_CONFIGURATION_USERSCOPEDSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D926BD0)

namespace System::Configuration
{
	inline static constexpr unsigned int UserScopedSettingAttribute_TypeDefinitionIndex = 4233;

	class UserScopedSettingAttribute : public ::System::Configuration::SettingAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_USERSCOPEDSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
