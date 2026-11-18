#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class AuthenticationModuleElementCollection; }

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_AUTHENTICATIONMODULES_OFFSET UNITYSDK_OFFSET(0x1D884300)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D884340)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D884380)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D8843C0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8842C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModulesSection_TypeDefinitionIndex = 4115;

	class AuthenticationModulesSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::AuthenticationModuleElementCollection* get_AuthenticationModules()
		{
			return ((::System::Net::Configuration::AuthenticationModuleElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_AUTHENTICATIONMODULES_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void InitializeDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_INITIALIZEDEFAULT_OFFSET))(this);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
