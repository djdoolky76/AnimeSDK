#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_error_code.h"

namespace Mono::Unity
{
	struct alignas(4) UnityTls_unitytls_errorstate
	{
		::System::UInt32 magic; // 0x10
		::Mono::Unity::UnityTls_unitytls_error_code code; // 0x14
		::System::UInt64 reserved; // 0x18
	};
}
