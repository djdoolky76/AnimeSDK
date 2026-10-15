#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_IPADDRESS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F067EF0)
#define SYSTEM_NET_IPADDRESS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F066BB0)
#define SYSTEM_NET_IPADDRESS_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F066D60)
#define SYSTEM_NET_IPADDRESS_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F066DB0)
#define SYSTEM_NET_IPADDRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F066B40)
#define SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F067B20)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F067BA0)
#define SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x1F04A130)
#define SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F067D40)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1F0670F0)
#define SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET UNITYSDK_OFFSET(0x1F067B30)
#define SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x1F067100)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET UNITYSDK_OFFSET(0x1F067930)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET UNITYSDK_OFFSET(0x1F067960)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET UNITYSDK_OFFSET(0x1F0678D0)
#define SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET UNITYSDK_OFFSET(0x1F066DF0)
#define SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1F067A20)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET UNITYSDK_OFFSET(0x1F067E30)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET UNITYSDK_OFFSET(0x1F0679E0)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET UNITYSDK_OFFSET(0x1F067970)
#define SYSTEM_NET_IPADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x1F036440)
#define SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0368F0)
#define SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1F036720)

namespace System::Net
{
	inline static constexpr unsigned int IPAddress_TypeDefinitionIndex = 2743;

	class IPAddress : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt16>* m_Numbers; // 0x10
		::System::String* m_ToString; // 0x18
		::System::Int64 m_Address; // 0x20
		::System::Int64 m_ScopeId; // 0x28
		::System::Int32 m_HashCode; // 0x30
		::System::Net::Sockets::AddressFamily m_Family; // 0x34
		static ::System::Net::IPAddress** StaticGet_Loopback()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B0F0);
		}

		static ::System::Net::IPAddress** StaticGet_None()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B0F8);
		}

		static ::System::Net::IPAddress** StaticGet_Any()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B100);
		}

		static ::System::Net::IPAddress** StaticGet_Broadcast()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B108);
		}

		static ::System::Net::IPAddress** StaticGet_IPv6Loopback()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B110);
		}

		static ::System::Net::IPAddress** StaticGet_IPv6Any()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B118);
		}

		static ::System::Net::IPAddress** StaticGet_IPv6None()
		{
			return (::System::Net::IPAddress**)UnitySDK::FromName("System.Net", "IPAddress")->GetStaticField(0x1B120);
		}

		// static const ::System::Object LoopbackMask; // 0x0
		// static const ::System::Object IPv4AddressBytes; // 0x0
		// static const ::System::Object IPv6AddressBytes; // 0x0
		// static const ::System::Object NumberOfLabels; // 0x0
		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::UInt16>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt16>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_CTOR_3_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::IPAddress* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Net::IPAddress* Parse(::System::String* a1)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_PARSE_OFFSET))(a1);
		}

		static ::System::Net::IPAddress* InternalParse(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetAddressBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET))(this);
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Int64 get_ScopeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET))(this);
		}

		static ::System::Int64 HostToNetworkOrder(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET))(a1);
		}

		static ::System::Int32 HostToNetworkOrder_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET))(a1);
		}

		static ::System::Int16 HostToNetworkOrder_2(::System::Int16 a1)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET))(a1);
		}

		static ::System::Int64 NetworkToHostOrder(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET))(a1);
		}

		static ::System::Int32 NetworkToHostOrder_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET))(a1);
		}

		static ::System::Boolean IsLoopback(::System::Net::IPAddress* a1)
		{
			return ((::System::Boolean(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET))(a1);
		}

		::System::Boolean get_IsBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::Net::IPAddress* MapToIPv6()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET))(this);
		}

	};
}
