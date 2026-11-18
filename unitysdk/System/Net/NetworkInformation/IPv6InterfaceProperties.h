#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/ScopeLevel.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPV6INTERFACEPROPERTIES_GETSCOPEID_OFFSET UNITYSDK_OFFSET(0x1D8967A0)
#define SYSTEM_NET_NETWORKINFORMATION_IPV6INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8967F0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPv6InterfaceProperties_TypeDefinitionIndex = 3717;

	class IPv6InterfaceProperties : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPV6INTERFACEPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Int64 GetScopeId(::System::Net::NetworkInformation::ScopeLevel scopeLevel)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Net::NetworkInformation::ScopeLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPV6INTERFACEPROPERTIES_GETSCOPEID_OFFSET))(this, scopeLevel);
		}
	};
}
