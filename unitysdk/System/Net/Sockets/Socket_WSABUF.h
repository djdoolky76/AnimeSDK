#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_WSABUF_TypeDefinitionIndex = 3654;

	struct alignas(4) Socket_WSABUF
	{
		::System::Int32 len; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr buf; // 0x18
	};
}
