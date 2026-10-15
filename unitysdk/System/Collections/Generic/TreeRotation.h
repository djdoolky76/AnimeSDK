#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int TreeRotation_TypeDefinitionIndex = 3052;

	enum class TreeRotation : ::System::Byte
	{
		Left = 0,
		LeftRight = 1,
		Right = 2,
		RightLeft = 3,
	};
}
