#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballColliderData_TypeDefinitionIndex = 88720;

	struct alignas(8) PinballColliderData
	{
		::System::String* ColliderName; // 0x10
	};
}
