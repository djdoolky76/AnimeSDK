#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int BRECORD_TypeDefinitionIndex = 453;

	struct alignas(4) BRECORD
	{
		::System::IntPtr pvRecord; // 0x10
		::System::IntPtr pRecInfo; // 0x18
	};
}
