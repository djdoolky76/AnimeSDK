#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int DigitShapes_TypeDefinitionIndex = 720;

	enum class DigitShapes : ::System::Int32
	{
		Context = 0,
		None = 1,
		NativeNational = 2,
	};
}
