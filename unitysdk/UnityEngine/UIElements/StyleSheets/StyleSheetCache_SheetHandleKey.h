#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets
{
	struct alignas(4) StyleSheetCache_SheetHandleKey
	{
		::System::Int32 sheetInstanceID; // 0x10
		::System::Int32 index; // 0x14
	};
}
