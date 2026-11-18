#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class EndPoint; }

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketReceiveFromResult_TypeDefinitionIndex = 3686;

	struct alignas(8) SocketReceiveFromResult
	{
		::System::Int32 ReceivedBytes; // 0x10
		::System::Byte _padding0[0x4];
		::System::Net::EndPoint* RemoteEndPoint; // 0x18
	};
}
