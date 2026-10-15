#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int RuntimeArgumentHandle_TypeDefinitionIndex = 421;

	struct alignas(4) RuntimeArgumentHandle
	{
		::System::IntPtr args; // 0x10
	};
}
