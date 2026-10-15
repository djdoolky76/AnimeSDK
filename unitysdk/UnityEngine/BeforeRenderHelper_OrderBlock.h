#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine
{
	struct alignas(8) BeforeRenderHelper_OrderBlock
	{
		::System::Int32 order; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Events::UnityAction* callback; // 0x18
	};
}
