#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Configuration { class SettingsProvider; }

#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1DB9DB10)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9DAD0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsLoadedEventArgs_TypeDefinitionIndex = 4195;

	class SettingsLoadedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::System::Configuration::SettingsProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS__CTOR_OFFSET))(this, provider);
		}

		::System::Configuration::SettingsProvider* get_Provider()
		{
			return ((::System::Configuration::SettingsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_GET_PROVIDER_OFFSET))(this);
		}
	};
}
