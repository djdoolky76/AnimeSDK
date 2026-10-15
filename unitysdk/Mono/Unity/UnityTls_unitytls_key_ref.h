#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Unity
{
	struct alignas(4) UnityTls_unitytls_key_ref
	{
		::System::UInt64 handle; // 0x10
	};
}
