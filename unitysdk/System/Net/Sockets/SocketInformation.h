#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/SocketInformationOptions.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class EndPoint; }

#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8F8E10)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x8F8E30)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x8F8DF0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x363D60)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x282350)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x8F8E50)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8F8E20)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x8F8E40)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x8F8E00)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x358B00)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x4254B0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x8F8E60)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketInformation_TypeDefinitionIndex = 3665;

	struct alignas(8) SocketInformation
	{
		::Il2CppArray<::System::Byte>* protocolInformation; // 0x10
		::System::Net::Sockets::SocketInformationOptions options; // 0x18
		::System::Byte _padding0[0x4];
		::System::Net::EndPoint* remoteEndPoint; // 0x20

		::Il2CppArray<::System::Byte>* get_ProtocolInformation()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_PROTOCOLINFORMATION_OFFSET))(this);
		}

		::System::Void set_ProtocolInformation(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_PROTOCOLINFORMATION_OFFSET))(this, value);
		}

		::System::Net::Sockets::SocketInformationOptions get_Options()
		{
			return ((::System::Net::Sockets::SocketInformationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Net::Sockets::SocketInformationOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketInformationOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNonBlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISNONBLOCKING_OFFSET))(this);
		}

		::System::Void set_IsNonBlocking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISNONBLOCKING_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISCONNECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsListening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISLISTENING_OFFSET))(this);
		}

		::System::Void set_IsListening(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISLISTENING_OFFSET))(this, value);
		}

		::System::Boolean get_UseOnlyOverlappedIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_USEONLYOVERLAPPEDIO_OFFSET))(this);
		}

		::System::Void set_UseOnlyOverlappedIO(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_USEONLYOVERLAPPEDIO_OFFSET))(this, value);
		}

		::System::Net::EndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Void set_RemoteEndPoint(::System::Net::EndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_REMOTEENDPOINT_OFFSET))(this, value);
		}
	};
}
