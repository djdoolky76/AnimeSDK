#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	struct alignas(4) TextPosition
	{
		::System::Int64 column; // 0x10
		::System::Int64 line; // 0x18
	};
}
