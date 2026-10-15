#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class BinaryArrayTypeEnum : ::System::Int32
	{
		Single = 0,
		Jagged = 1,
		Rectangular = 2,
		SingleOffset = 3,
		JaggedOffset = 4,
		RectangularOffset = 5,
	};
}
