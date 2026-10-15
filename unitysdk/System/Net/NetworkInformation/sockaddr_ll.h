#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	struct alignas(8) sockaddr_ll
	{
		::System::UInt16 sll_family; // 0x10
		::System::UInt16 sll_protocol; // 0x12
		::System::Int32 sll_ifindex; // 0x14
		::System::UInt16 sll_hatype; // 0x18
		::System::Byte sll_pkttype; // 0x1A
		::System::Byte sll_halen; // 0x1B
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* sll_addr; // 0x20
	};
}
