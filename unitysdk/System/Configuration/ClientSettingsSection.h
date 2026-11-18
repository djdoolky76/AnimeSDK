#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Configuration { class SettingElementCollection; }

#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D0FA220)
#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1D0FA260)
#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FA1E0)

namespace System::Configuration
{
	inline static constexpr unsigned int ClientSettingsSection_TypeDefinitionIndex = 4199;

	class ClientSettingsSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Configuration::SettingElementCollection* get_Settings()
		{
			return ((::System::Configuration::SettingElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_SETTINGS_OFFSET))(this);
		}
	};
}
