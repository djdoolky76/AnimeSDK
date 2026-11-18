#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_PROGRAM_TypeDefinitionIndex = 7986;

	enum class UltiDraw_PROGRAM : ::System::Int32
	{
		QUADS = 4,
		LINES = 1,
		NONE = 0,
		TRIANGLES = 2,
		TRIANGLE_STRIP = 3,
	};
}
