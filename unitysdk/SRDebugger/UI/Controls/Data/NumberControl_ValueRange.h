#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger::UI::Controls::Data
{
	struct alignas(4) NumberControl_ValueRange
	{
		::System::Double MaxValue; // 0x10
		::System::Double MinValue; // 0x18
	};
}
