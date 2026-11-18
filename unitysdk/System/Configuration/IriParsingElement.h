#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1EA947A0)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EA94820)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1EA947E0)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA94760)

namespace System::Configuration
{
	inline static constexpr unsigned int IriParsingElement_TypeDefinitionIndex = 4211;

	class IriParsingElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
