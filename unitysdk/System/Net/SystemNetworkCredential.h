#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkCredential.h"
namespace System::Net { class SystemNetworkCredential; }

#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F08C9F0)
#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F08C920)

namespace System::Net
{
	class SystemNetworkCredential : public ::System::Net::NetworkCredential
	{
	public:
		static ::System::Net::SystemNetworkCredential** StaticGet_defaultCredential()
		{
			return (::System::Net::SystemNetworkCredential**)UnitySDK::FromName("System.Net", "SystemNetworkCredential")->GetStaticField(0x246F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_CCTOR_OFFSET))();
		}

	};
}
