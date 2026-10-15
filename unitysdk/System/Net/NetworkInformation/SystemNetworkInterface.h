#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Net::NetworkInformation { class NetworkInterface; }
namespace System::Net::NetworkInformation { class NetworkInterfaceFactory; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F071070)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1F06DAF0)

namespace System::Net::NetworkInformation
{
	class SystemNetworkInterface : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::NetworkInterfaceFactory** StaticGet_nif()
		{
			return (::System::Net::NetworkInformation::NetworkInterfaceFactory**)UnitySDK::FromName("System.Net.NetworkInformation", "SystemNetworkInterface")->GetStaticField(0x26A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET))();
		}

	};
}
