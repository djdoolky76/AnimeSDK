#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RendererUpdateAllAsyncHandle_TypeDefinitionIndex = 6164;

	struct alignas(4) RendererUpdateAllAsyncHandle
	{
		::System::IntPtr state; // 0x10
	};
}
