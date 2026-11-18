#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket_MessageOpcode_TypeDefinitionIndex = 3873;

	enum class ManagedWebSocket_MessageOpcode : ::System::Byte
	{
		Continuation = 0,
		Text = 1,
		Binary = 2,
		Close = 8,
		Ping = 9,
		Pong = 10,
	};
}
