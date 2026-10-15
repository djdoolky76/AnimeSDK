#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/CommonUnixIPGlobalProperties.h"

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06CF20)

namespace System::Net::NetworkInformation
{
	class UnixIPGlobalProperties : public ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_CTOR_OFFSET))(this);
		}

	};
}
