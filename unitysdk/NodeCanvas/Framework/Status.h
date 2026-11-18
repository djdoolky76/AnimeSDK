#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 30395;

	enum class Status : ::System::Int32
	{
		Failure = 0,
		Resting = 3,
		Optional = 5,
		Success = 1,
		Error = 4,
		Running = 2,
	};
}
