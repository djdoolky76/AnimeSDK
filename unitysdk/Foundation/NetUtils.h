#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class IPAddress; }

#define FOUNDATION_NETUTILS_CRC32WITHSEED_1_OFFSET UNITYSDK_OFFSET(0x18A8BAA0)
#define FOUNDATION_NETUTILS_CRC32WITHSEED_2_OFFSET UNITYSDK_OFFSET(0x18A8BB50)
#define FOUNDATION_NETUTILS_CRC32WITHSEED_OFFSET UNITYSDK_OFFSET(0x18A8B890)
#define FOUNDATION_NETUTILS_CRC32_1_OFFSET UNITYSDK_OFFSET(0x18A8B3B0)
#define FOUNDATION_NETUTILS_CRC32_2_OFFSET UNITYSDK_OFFSET(0x18A8B5C0)
#define FOUNDATION_NETUTILS_CRC32_3_OFFSET UNITYSDK_OFFSET(0x18A8B360)
#define FOUNDATION_NETUTILS_CRC32_OFFSET UNITYSDK_OFFSET(0x18A8B170)
#define FOUNDATION_NETUTILS_FINALURL_OFFSET UNITYSDK_OFFSET(0x18A8C600)
#define FOUNDATION_NETUTILS_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x18A8A4C0)
#define FOUNDATION_NETUTILS_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x18A8A540)
#define FOUNDATION_NETUTILS_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x18A8A5C0)
#define FOUNDATION_NETUTILS_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x18A8A640)
#define FOUNDATION_NETUTILS_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x18A8A850)
#define FOUNDATION_NETUTILS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x18A8A2B0)
#define FOUNDATION_NETUTILS_GETIPADDRESS_1_OFFSET UNITYSDK_OFFSET(0x18A8BDC0)
#define FOUNDATION_NETUTILS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x18A8BD80)
#define FOUNDATION_NETUTILS_GETIPV6ADRESS_OFFSET UNITYSDK_OFFSET(0x18A8C370)
#define FOUNDATION_NETUTILS_GETIPV6_OFFSET UNITYSDK_OFFSET(0x18A8C290)
#define FOUNDATION_NETUTILS_GET_ISIPV6_OFFSET UNITYSDK_OFFSET(0x18A8BBE0)
#define FOUNDATION_NETUTILS_HOSTTONETWORKORDER_1_OFFSET UNITYSDK_OFFSET(0x18A89DA0)
#define FOUNDATION_NETUTILS_HOSTTONETWORKORDER_2_OFFSET UNITYSDK_OFFSET(0x18A89F60)
#define FOUNDATION_NETUTILS_HOSTTONETWORKORDER_OFFSET UNITYSDK_OFFSET(0x18A89BF0)
#define FOUNDATION_NETUTILS_ISIPADRESS_OFFSET UNITYSDK_OFFSET(0x18A8C2D0)
#define FOUNDATION_NETUTILS_ISIPV6_OFFSET UNITYSDK_OFFSET(0x18A8BC00)
#define FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_1_OFFSET UNITYSDK_OFFSET(0x18A8A1B0)
#define FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_2_OFFSET UNITYSDK_OFFSET(0x18A8A220)
#define FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_OFFSET UNITYSDK_OFFSET(0x18A8A150)
#define FOUNDATION_NETUTILS_SET_ISIPV6_OFFSET UNITYSDK_OFFSET(0x18A8BBF0)
#define FOUNDATION_NETUTILS_SIZEOF_1_OFFSET UNITYSDK_OFFSET(0x18A8AAA0)
#define FOUNDATION_NETUTILS_SIZEOF_2_OFFSET UNITYSDK_OFFSET(0x18A8AAE0)
#define FOUNDATION_NETUTILS_SIZEOF_3_OFFSET UNITYSDK_OFFSET(0x18A8AB20)
#define FOUNDATION_NETUTILS_SIZEOF_4_OFFSET UNITYSDK_OFFSET(0x18A8AB60)
#define FOUNDATION_NETUTILS_SIZEOF_5_OFFSET UNITYSDK_OFFSET(0x18A8ABA0)
#define FOUNDATION_NETUTILS_SIZEOF_6_OFFSET UNITYSDK_OFFSET(0x18A8ABE0)
#define FOUNDATION_NETUTILS_SIZEOF_7_OFFSET UNITYSDK_OFFSET(0x18A8AD80)
#define FOUNDATION_NETUTILS_SIZEOF_OFFSET UNITYSDK_OFFSET(0x18A8AA60)
#define FOUNDATION_NETUTILS_WRITEBYTESREVERSE_OFFSET UNITYSDK_OFFSET(0x18A8AF20)

namespace Foundation
{
	inline static constexpr unsigned int NetUtils_TypeDefinitionIndex = 8088;

	class NetUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__isIPv6_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NetUtils_TypeDefinitionIndex)->GetStaticField(0x3A60);
		}

		static ::System::UInt16 HostToNetworkOrder(::System::UInt16 num)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_HOSTTONETWORKORDER_OFFSET))(num);
		}

		static ::System::UInt32 HostToNetworkOrder_1(::System::UInt32 num)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_HOSTTONETWORKORDER_1_OFFSET))(num);
		}

		static ::System::UInt64 HostToNetworkOrder_2(::System::UInt64 num)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_HOSTTONETWORKORDER_2_OFFSET))(num);
		}

		static ::System::UInt16 NetworkToHostOrder(::System::UInt16 num)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_OFFSET))(num);
		}

		static ::System::UInt32 NetworkToHostOrder_1(::System::UInt32 num)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_1_OFFSET))(num);
		}

		static ::System::UInt64 NetworkToHostOrder_2(::System::UInt64 num)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_NETWORKTOHOSTORDER_2_OFFSET))(num);
		}

		static ::System::Int32 GetBytes(::System::Int16 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 GetBytes_1(::System::UInt16 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::UInt16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_1_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 GetBytes_2(::System::Int32 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_2_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 GetBytes_3(::System::UInt32 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_3_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 GetBytes_4(::System::Int64 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_4_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 GetBytes_5(::System::UInt64 value, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETBYTES_5_OFFSET))(value, buf, startIndex);
		}

		static ::System::Int32 SizeOf(::System::Byte value)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_1(::System::SByte value)
		{
			return ((::System::Int32(*)(::System::SByte))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_1_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_2(::System::Int16 value)
		{
			return ((::System::Int32(*)(::System::Int16))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_2_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_3(::System::UInt16 value)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_3_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_4(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_4_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_5(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_5_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_6(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_6_OFFSET))(value);
		}

		static ::System::Int32 SizeOf_7(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SIZEOF_7_OFFSET))(value);
		}

		static ::System::Int32 WriteBytesReverse(::System::IO::MemoryStream* stream, ::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::IO::MemoryStream*, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_WRITEBYTESREVERSE_OFFSET))(stream, bytes, value);
		}

		static ::System::UInt32 CRC32(::System::IO::MemoryStream* stream)
		{
			return ((::System::UInt32(*)(::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32_OFFSET))(stream);
		}

		static ::System::UInt32 CRC32_1(::System::IO::MemoryStream* stream, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::UInt32(*)(::System::IO::MemoryStream*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32_1_OFFSET))(stream, start, length);
		}

		static ::System::UInt32 CRC32_2(::System::UInt32 seed, ::System::String* str)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32_2_OFFSET))(seed, str);
		}

		static ::System::UInt32 CRC32_3(::Il2CppArray<::System::Byte>* buf, ::System::Int32 start, ::System::Int32 buf_len)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32_3_OFFSET))(buf, start, buf_len);
		}

		static ::System::UInt32 CRC32WithSeed(::System::UInt32 seed, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 start, ::System::Int32 buf_len)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32WITHSEED_OFFSET))(seed, buf, start, buf_len);
		}

		static ::System::UInt32 CRC32WithSeed_1(::System::UInt32 seed, ::System::IO::MemoryStream* stream)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32WITHSEED_1_OFFSET))(seed, stream);
		}

		static ::System::UInt32 CRC32WithSeed_2(::System::UInt32 seed, ::System::IO::MemoryStream* stream, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IO::MemoryStream*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_CRC32WITHSEED_2_OFFSET))(seed, stream, start, length);
		}

		static ::System::Boolean get_isIPv6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GET_ISIPV6_OFFSET))();
		}

		static ::System::Void set_isIPv6(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_SET_ISIPV6_OFFSET))(value);
		}

		static ::System::Boolean IsIPV6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_ISIPV6_OFFSET))();
		}

		static ::System::Net::IPAddress* GetIPAddress(::System::Net::IPAddress* ip)
		{
			return ((::System::Net::IPAddress*(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETIPADDRESS_OFFSET))(ip);
		}

		static ::System::String* GetIPAddress_1(::System::Net::NetworkInformation::NetworkInterfaceType type)
		{
			return ((::System::String*(*)(::System::Net::NetworkInformation::NetworkInterfaceType))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETIPADDRESS_1_OFFSET))(type);
		}

		static ::System::Boolean IsIPAdress(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_ISIPADRESS_OFFSET))(str);
		}

		static ::System::String* GetIPV6Adress(::System::String* hostName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETIPV6ADRESS_OFFSET))(hostName);
		}

		static ::System::String* FinalUrl(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_FINALURL_OFFSET))(url);
		}

		static ::System::String* GetIpV6(::System::String* hostOrHostName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NETUTILS_GETIPV6_OFFSET))(hostOrHostName);
		}
	};
}
