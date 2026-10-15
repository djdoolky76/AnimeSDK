#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) PhotoGraphConditionPageParam
	{
		::System::Boolean IsLongRangeMode; // 0x10
		::System::Boolean HideResultToast; // 0x11
		::System::Boolean ShowSaveBtn; // 0x12
	};
}
