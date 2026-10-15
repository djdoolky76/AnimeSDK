#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	struct alignas(8) FramePassCapturer_ImageCompareResult
	{
		::System::Single corr; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* diff; // 0x18
	};
}
