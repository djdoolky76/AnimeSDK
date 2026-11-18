#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_GeometryType_TypeDefinitionIndex = 8154;

	enum class MyLogger_GeometryType : ::System::Byte
	{
		Wired = 2,
		Wire = 1,
		Normal = 0,
	};
}
