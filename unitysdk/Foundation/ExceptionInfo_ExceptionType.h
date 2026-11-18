#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_ExceptionType_TypeDefinitionIndex = 7913;

	enum class ExceptionInfo_ExceptionType : ::System::Int32
	{
		None = 0,
		Error = 2,
		Warning = 1,
	};
}
