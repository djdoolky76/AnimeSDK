#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/Provider/ProviderBase.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBD8A0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProvider_TypeDefinitionIndex = 4074;

	class SettingsProvider : public ::System::Configuration::Provider::ProviderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
