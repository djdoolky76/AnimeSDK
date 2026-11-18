#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 30318;

	enum class fsDataType : ::System::Int32
	{
		Boolean = 4,
		String = 5,
		Double = 2,
		Array = 0,
		Object = 1,
		Null = 6,
		Int64 = 3,
	};
}
