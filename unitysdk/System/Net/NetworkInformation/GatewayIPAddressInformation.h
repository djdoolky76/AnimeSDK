#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF09AF0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int GatewayIPAddressInformation_TypeDefinitionIndex = 3703;

	class GatewayIPAddressInformation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_GATEWAYIPADDRESSINFORMATION__CTOR_OFFSET))(this);
		}
	};
}
