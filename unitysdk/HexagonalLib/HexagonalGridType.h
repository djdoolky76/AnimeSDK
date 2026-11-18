#pragma once
#include "unitysdk/unitysdk.h"

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGridType_TypeDefinitionIndex = 28946;

	enum class HexagonalGridType : ::System::Byte
	{
		FlatOdd = 2,
		PointyOdd = 0,
		FlatEven = 3,
		PointyEven = 1,
	};
}
