#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeBindableStructSource_TypeDefinitionIndex = 31037;

	enum class StateTreeBindableStructSource : ::System::Byte
	{
		Context = 0,
		Parameter = 1,
		Evaluator = 2,
		GlobalTask = 3,
		State = 4,
		Task = 5,
		Condition = 6,
	};
}
