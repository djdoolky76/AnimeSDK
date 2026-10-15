#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int DefaultIfEmpty_1__DefaultIfEmpty_IteratingState_TypeDefinitionIndex = 45335;

	enum class DefaultIfEmpty_1__DefaultIfEmpty_IteratingState : ::System::Byte
	{
		Empty = 0,
		Iterating = 1,
		Completed = 2,
	};
}
