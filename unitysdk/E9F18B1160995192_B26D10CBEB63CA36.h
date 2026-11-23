#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E9F18B1160995192_B26D10CBEB63CA36__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int E9F18B1160995192_B26D10CBEB63CA36_TypeDefinitionIndex = 14842;

class E9F18B1160995192_B26D10CBEB63CA36 : public ::System::Object
{
public:
	::System::String* E34F9A34ECE7C571; // 0x10
	::System::Object* A35E61455FB5F910; // 0x18

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + E9F18B1160995192_B26D10CBEB63CA36__CTOR_OFFSET))(this, F79B4D487F303AB2, E937D4885DAA1AE8);
	}
};
