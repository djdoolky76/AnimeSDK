#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_RotationOrder_TypeDefinitionIndex = 32178;

	enum class math_RotationOrder : ::System::Byte
	{
		XYZ = 0,
		XZY = 1,
		YXZ = 2,
		YZX = 3,
		ZXY = 4,
		ZYX = 5,
		Default = 4,
	};
}
