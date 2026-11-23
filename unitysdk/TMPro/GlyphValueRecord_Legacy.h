#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int GlyphValueRecord_Legacy_TypeDefinitionIndex = 18244;

	struct alignas(4) GlyphValueRecord_Legacy
	{
		::System::Single xPlacement; // 0x10
		::System::Single yPlacement; // 0x14
		::System::Single xAdvance; // 0x18
		::System::Single yAdvance; // 0x1C
	};
}
