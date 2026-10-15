#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int NumberControl_ValueRange_TypeDefinitionIndex = 38045;

	struct alignas(4) NumberControl_ValueRange
	{
		::System::Double MaxValue; // 0x10
		::System::Double MinValue; // 0x18
	};
}
