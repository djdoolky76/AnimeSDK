#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 26494;

	enum class WindingRule : ::System::Int32
	{
		AbsGeqTwo = 4,
		Positive = 2,
		Negative = 3,
		EvenOdd = 0,
		NonZero = 1,
	};
}
