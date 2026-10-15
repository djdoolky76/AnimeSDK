#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Unity
{
	enum class UnityTls_unitytls_protocol : ::System::UInt32
	{
		UNITYTLS_PROTOCOL_TLS_1_0 = 0,
		UNITYTLS_PROTOCOL_TLS_1_1 = 1,
		UNITYTLS_PROTOCOL_TLS_1_2 = 2,
		UNITYTLS_PROTOCOL_INVALID = 3,
	};
}
