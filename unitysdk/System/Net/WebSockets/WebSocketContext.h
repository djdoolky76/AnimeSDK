#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89CD20)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketContext_TypeDefinitionIndex = 3899;

	class WebSocketContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
