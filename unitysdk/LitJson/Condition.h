#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 8578;

	enum class Condition : ::System::Int32
	{
		NotAProperty = 2,
		InObject = 1,
		InArray = 0,
		Comment = 5,
		Property = 3,
		Value = 4,
	};
}
