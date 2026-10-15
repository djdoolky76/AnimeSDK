#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	struct alignas(4) Win32_SOCKET_ADDRESS
	{
		::System::IntPtr Sockaddr; // 0x10
		::System::Int32 SockaddrLength; // 0x18
	};
}
