#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) MouseInputController__POINT
	{
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14
	};
}
