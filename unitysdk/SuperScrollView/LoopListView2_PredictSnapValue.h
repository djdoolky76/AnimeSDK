#pragma once
#include "unitysdk/unitysdk.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_PREDICTSNAPVALUE_CLEAR_OFFSET UNITYSDK_OFFSET(0xF9CA0)

namespace SuperScrollView
{
	struct alignas(4) LoopListView2_PredictSnapValue
	{
		::System::Single PredictSnapStartTime; // 0x10
		::System::Single PredictSnapTime; // 0x14
		::System::Single PredictSnapStartValue; // 0x18
		::System::Single PredictSnapOffset; // 0x1C
		::System::Single PredictSnapLastProgress; // 0x20
		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_PREDICTSNAPVALUE_CLEAR_OFFSET))(this);
		}

	};
}
