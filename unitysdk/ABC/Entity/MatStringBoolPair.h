#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ABC::Entity
{
	inline static constexpr unsigned int MatStringBoolPair_TypeDefinitionIndex = 7087;

	struct alignas(8) MatStringBoolPair
	{
		::System::String* Name; // 0x10
		::System::Boolean Active; // 0x18
	};
}
