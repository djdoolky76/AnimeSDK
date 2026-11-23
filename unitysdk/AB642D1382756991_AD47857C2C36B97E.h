#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AB642D1382756991_AD47857C2C36B97E_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x26B9360)

inline static constexpr unsigned int AB642D1382756991_AD47857C2C36B97E_TypeDefinitionIndex = 2579;

struct alignas(4) AB642D1382756991_AD47857C2C36B97E
{
	::System::UInt64 BB574549244B9909; // 0x10
	::System::Int32 F15DED49F43372B1; // 0x18

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB642D1382756991_AD47857C2C36B97E_EA28CF291EBB2931_OFFSET))(this);
	}
};
