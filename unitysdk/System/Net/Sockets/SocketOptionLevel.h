#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	enum class SocketOptionLevel : ::System::Int32
	{
		Socket = 65535,
		IP = 0,
		IPv6 = 41,
		Tcp = 6,
		Udp = 17,
	};
}
