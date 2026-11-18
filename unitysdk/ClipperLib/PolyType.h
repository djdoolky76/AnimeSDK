#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int PolyType_TypeDefinitionIndex = 32869;

	enum class PolyType : ::System::Int32
	{
		ptSubject = 0,
		ptClip = 1,
	};
}
