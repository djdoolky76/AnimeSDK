#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0217E0)

namespace System::Net::Configuration
{
	class BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
