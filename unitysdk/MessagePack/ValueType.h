#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 30458;

	enum class ValueType : ::System::Byte
	{
		Long = 4,
		ULong = 5,
		True = 1,
		String = 7,
		False = 2,
		Null = 0,
		Decimal = 6,
		Double = 3,
	};
}
