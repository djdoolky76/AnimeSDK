#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 8377;

	enum class MultiVerSuffix : ::System::Int32
	{
		ErrorBasePath = 2,
		ErrorMultiVerPath = 3,
		RepeatBasePath = 4,
		Correct = 0,
		Unknown = 1,
	};
}
