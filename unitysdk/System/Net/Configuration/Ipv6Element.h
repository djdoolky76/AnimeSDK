#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F021BF0)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F021C30)

namespace System::Net::Configuration
{
	class Ipv6Element : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

	};
}
