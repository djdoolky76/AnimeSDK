#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPGlobalProperties.h"
#include "unitysdk/System/Net/NetworkInformation/NetBiosNodeType.h"
#include "unitysdk/System/Net/NetworkInformation/TcpState.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIBICMPINFO.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_ICMP_EX.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IPSTATS.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_TCPSTATS.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_UDPSTATS.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::NetworkInformation { class IPGlobalStatistics; }
namespace System::Net::NetworkInformation { class IcmpV4Statistics; }
namespace System::Net::NetworkInformation { class IcmpV6Statistics; }
namespace System::Net::NetworkInformation { class TcpConnectionInformation; }
namespace System::Net::NetworkInformation { class TcpStatistics; }
namespace System::Net::NetworkInformation { class UdpStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_FILLTCPTABLE_OFFSET UNITYSDK_OFFSET(0x1E0C5CA0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E0C6360)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1E0C65F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1E0C68F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPSTATISTICSEX_OFFSET UNITYSDK_OFFSET(0x1E0C7E10)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C7360)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C7080)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C73E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPSTATISTICSEX_OFFSET UNITYSDK_OFFSET(0x1E0C8990)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C8750)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C8A10)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCP6TABLE_OFFSET UNITYSDK_OFFSET(0x1E0C62B0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C8C50)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C8EC0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPSTATISTICSEX_OFFSET UNITYSDK_OFFSET(0x1E0C8E40)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPTABLE_OFFSET UNITYSDK_OFFSET(0x1E0C6220)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDP6TABLE_OFFSET UNITYSDK_OFFSET(0x1E0C6FF0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C90B0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1E0C92E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPSTATISTICSEX_OFFSET UNITYSDK_OFFSET(0x1E0C9260)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPTABLE_OFFSET UNITYSDK_OFFSET(0x1E0C6F60)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DHCPSCOPENAME_OFFSET UNITYSDK_OFFSET(0x1E0C9490)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E0C94B0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1E0C94D0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_ISWINSPROXY_OFFSET UNITYSDK_OFFSET(0x1E0C94F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E0C9510)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_ISLISTENERSTATE_OFFSET UNITYSDK_OFFSET(0x1E0C6340)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_NTOHS_OFFSET UNITYSDK_OFFSET(0x1E0C9530)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C95B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_TypeDefinitionIndex = 3757;

	class Win32IPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		// static const ::System::Int32 AF_INET = 0x2; // 0x0
		// static const ::System::Int32 AF_INET6 = 0x17; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Void FillTcpTable(::System::Collections::Generic::List_1<::System::Object*>*& tab4, ::System::Collections::Generic::List_1<::System::Object*>*& tab6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_FILLTCPTABLE_OFFSET))(this, tab4, tab6);
		}

		::System::Boolean IsListenerState(::System::Net::NetworkInformation::TcpState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::TcpState))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_ISLISTENERSTATE_OFFSET))(this, state);
		}

		::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>* GetActiveTcpConnections()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveTcpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveUdpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV4Statistics* GetIcmpV4Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV4Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV6Statistics* GetIcmpV6Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV6Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv4GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv6GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET))(this);
		}

		::System::String* get_DhcpScopeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DHCPSCOPENAME_OFFSET))(this);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_HOSTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsWinsProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_ISWINSPROXY_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetBiosNodeType get_NodeType()
		{
			return ((::System::Net::NetworkInformation::NetBiosNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_NODETYPE_OFFSET))(this);
		}

		static ::System::Int32 GetTcpTable(::Il2CppArray<::System::Byte>* pTcpTable, ::System::Int32& pdwSize, ::System::Boolean bOrder)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPTABLE_OFFSET))(pTcpTable, pdwSize, bOrder);
		}

		static ::System::Int32 GetTcp6Table(::Il2CppArray<::System::Byte>* TcpTable, ::System::Int32& SizePointer, ::System::Boolean Order)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCP6TABLE_OFFSET))(TcpTable, SizePointer, Order);
		}

		static ::System::Int32 GetUdpTable(::Il2CppArray<::System::Byte>* pUdpTable, ::System::Int32& pdwSize, ::System::Boolean bOrder)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPTABLE_OFFSET))(pUdpTable, pdwSize, bOrder);
		}

		static ::System::Int32 GetUdp6Table(::Il2CppArray<::System::Byte>* Udp6Table, ::System::Int32& SizePointer, ::System::Boolean Order)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDP6TABLE_OFFSET))(Udp6Table, SizePointer, Order);
		}

		static ::System::Int32 GetTcpStatisticsEx(::System::Net::NetworkInformation::Win32_MIB_TCPSTATS& pStats, ::System::Int32 dwFamily)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_TCPSTATS&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETTCPSTATISTICSEX_OFFSET))(pStats, dwFamily);
		}

		static ::System::Int32 GetUdpStatisticsEx(::System::Net::NetworkInformation::Win32_MIB_UDPSTATS& pStats, ::System::Int32 dwFamily)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_UDPSTATS&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETUDPSTATISTICSEX_OFFSET))(pStats, dwFamily);
		}

		static ::System::Int32 GetIcmpStatistics(::System::Net::NetworkInformation::Win32_MIBICMPINFO& pStats, ::System::Int32 dwFamily)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIBICMPINFO&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPSTATISTICS_OFFSET))(pStats, dwFamily);
		}

		static ::System::Int32 GetIcmpStatisticsEx(::System::Net::NetworkInformation::Win32_MIB_ICMP_EX& pStats, ::System::Int32 dwFamily)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_ICMP_EX&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETICMPSTATISTICSEX_OFFSET))(pStats, dwFamily);
		}

		static ::System::Int32 GetIpStatisticsEx(::System::Net::NetworkInformation::Win32_MIB_IPSTATS& pStats, ::System::Int32 dwFamily)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_IPSTATS&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GETIPSTATISTICSEX_OFFSET))(pStats, dwFamily);
		}

		static ::System::UInt16 ntohs(::System::UInt16 netshort)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_NTOHS_OFFSET))(netshort);
		}
	};
}
