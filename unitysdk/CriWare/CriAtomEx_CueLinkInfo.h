#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomEx_CueLinkInfo
	{
		::System::IntPtr nativePlayerHn; // 0x10
		::System::UInt32 basePlaybackId; // 0x18
		::System::UInt32 targetPlaybackId; // 0x1C
		::System::Int32 cueLinkType; // 0x20
	};
}
