#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Net/EndPoint.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class SocketAddress; }

#define SYSTEM_NET_IPENDPOINT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F03A910)
#define SYSTEM_NET_IPENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x1F03A510)
#define SYSTEM_NET_IPENDPOINT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F009CD0)
#define SYSTEM_NET_IPENDPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F03A2D0)
#define SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F03A840)
#define SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F03A8E0)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1F01BF70)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1F03A3B0)
#define SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1F03A3C0)
#define SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F03A4A0)
#define SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F03A3D0)

namespace System::Net
{
	inline static constexpr unsigned int IPEndPoint_TypeDefinitionIndex = 2744;

	class IPEndPoint : public ::System::Net::EndPoint
	{
	public:
		::System::Net::IPAddress* m_Address; // 0x10
		::System::Int32 m_Port; // 0x18
		static ::System::Net::IPEndPoint** StaticGet_Any()
		{
			return (::System::Net::IPEndPoint**)UnitySDK::FromName("System.Net", "IPEndPoint")->GetStaticField(0x31120);
		}

		static ::System::Net::IPEndPoint** StaticGet_IPv6Any()
		{
			return (::System::Net::IPEndPoint**)UnitySDK::FromName("System.Net", "IPEndPoint")->GetStaticField(0x31128);
		}

		::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CCTOR_OFFSET))();
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET))(this);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* a1)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CREATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET))(this);
		}

	};
}
