#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F021C70)

namespace System::Net::Configuration
{
	class NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_CTOR_OFFSET))(this);
		}

	};
}
