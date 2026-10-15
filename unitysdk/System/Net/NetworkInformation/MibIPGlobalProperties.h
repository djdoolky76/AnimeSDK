#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPGlobalProperties.h"
namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F06D850)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06CE70)

namespace System::Net::NetworkInformation
{
	class MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties
	{
	public:
		::System::String* UdpFile; // 0x10
		::System::String* Udp6File; // 0x18
		::System::String* Tcp6File; // 0x20
		::System::String* StatisticsFile; // 0x28
		::System::String* TcpFile; // 0x30
		::System::String* StatisticsFileIPv6; // 0x38
		static ::Il2CppArray<::System::Char>** StaticGet_wsChars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net.NetworkInformation", "MibIPGlobalProperties")->GetStaticField(0x268C0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CCTOR_OFFSET))();
		}

	};
}
