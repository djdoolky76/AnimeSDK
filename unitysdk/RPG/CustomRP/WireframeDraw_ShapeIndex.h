#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	struct alignas(4) WireframeDraw_ShapeIndex
	{
		::System::Int32 offset; // 0x10
		::System::Int32 instanceCount; // 0x14
	};
}
