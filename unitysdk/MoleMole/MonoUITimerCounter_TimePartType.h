#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimePartType_TypeDefinitionIndex = 60707;

	enum class MonoUITimerCounter_TimePartType : ::System::Int32
	{
		MILLI_SECOND_1 = 4,
		MILLI_SECOND_2 = 8,
		ALL = 2147483647,
		HOUR = 768,
		HOUR_LOW = 256,
		HOUR_HIGT = 512,
		MILLI_SECOND_0 = 2,
		MINITE_LOW = 64,
		MINITE = 192,
		SECOND_HIGH = 32,
		SECOND_LOW = 16,
		SECOND = 48,
		MINITE_HIGT = 128,
	};
}
