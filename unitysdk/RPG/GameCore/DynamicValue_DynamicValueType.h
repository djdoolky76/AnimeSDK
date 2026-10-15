#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DynamicValue_DynamicValueType : ::System::Byte
	{
		INT = 0,
		FLOAT = 1,
		BOOL = 2,
		ARRAY = 3,
		MAP = 4,
		STRING = 5,
		NULL = 6,
	};
}
