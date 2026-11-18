#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventListRandomType_TypeDefinitionIndex = 14052;

	enum class EHollowEventListRandomType : ::System::Int16
	{
		Limited = 1,
		Unlimited = 0,
		EnumCount = 2,
	};
}
