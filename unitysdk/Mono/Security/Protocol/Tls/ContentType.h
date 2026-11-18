#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ContentType_TypeDefinitionIndex = 2353;

	enum class ContentType : ::System::Byte
	{
		ChangeCipherSpec = 20,
		Alert = 21,
		Handshake = 22,
		ApplicationData = 23,
	};
}
