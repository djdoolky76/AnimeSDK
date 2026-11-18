#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceFileType_TypeDefinitionIndex = 8441;

	enum class ResourceFileType : ::System::Int32
	{
		Res = 1,
		None = 0,
		Data = 3,
		Audio = 4,
		Silence = 2,
	};
}
