#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono
{
	struct alignas(8) RuntimeStructs_GenericParamInfo
	{
		::PVOID pklass; // 0x10
		::System::IntPtr name; // 0x18
		::System::UInt16 flags; // 0x20
		::System::Byte _padding0[0x2];
		::System::UInt32 token; // 0x24
		::PVOID constraints; // 0x28
	};
}
