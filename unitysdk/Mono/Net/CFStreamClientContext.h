#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net
{
	struct alignas(4) CFStreamClientContext
	{
		::System::IntPtr Version; // 0x10
		::System::IntPtr Info; // 0x18
		::System::IntPtr Retain; // 0x20
		::System::IntPtr Release; // 0x28
		::System::IntPtr CopyDescription; // 0x30
	};
}
