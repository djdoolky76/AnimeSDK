#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06CF50)

namespace System::Net::NetworkInformation
{
	class IPInterfaceProperties : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_CTOR_OFFSET))(this);
		}

	};
}
