#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UnderlineRenderParams_TypeDefinitionIndex = 79887;

	struct alignas(4) UnderlineRenderParams
	{
		::System::Single heightDelta; // 0x10
		::System::Single finalOffsetLocal; // 0x14
		::System::Single finalThicknessLocal; // 0x18
		::System::Single finalFeatherLocal; // 0x1C
	};
}
