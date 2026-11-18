#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int DATADIR_TypeDefinitionIndex = 3125;

	enum class DATADIR : ::System::Int32
	{
		DATADIR_GET = 1,
		DATADIR_SET = 2,
	};
}
