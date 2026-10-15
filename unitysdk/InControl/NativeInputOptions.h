#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	struct alignas(4) NativeInputOptions
	{
		::System::UInt16 updateRate; // 0x10
		::System::Byte _padding0[0x2];
		::System::Int32 enableXInput; // 0x14
		::System::Int32 enableMFi; // 0x18
		::System::Int32 preventSleep; // 0x1C
	};
}
