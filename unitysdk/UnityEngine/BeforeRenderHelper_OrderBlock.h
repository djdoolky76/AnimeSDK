#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_OrderBlock_TypeDefinitionIndex = 4098;

	struct alignas(8) BeforeRenderHelper_OrderBlock
	{
		::System::Int32 order; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Events::UnityAction* callback; // 0x18
	};
}
