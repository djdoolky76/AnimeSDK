#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E606D165FF9BCC82_B07657267F1B9280_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define E606D165FF9BCC82_EBFB2795A974FC52_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define E606D165FF9BCC82__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E606D165FF9BCC82_TypeDefinitionIndex = 20234;

class E606D165FF9BCC82 : public ::System::Object
{
public:
	::System::Int32 E5B02258DF6EC1C4; // 0x10

	::System::Int32 EBFB2795A974FC52()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E606D165FF9BCC82_EBFB2795A974FC52_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E606D165FF9BCC82__CTOR_OFFSET))(this);
	}

	::System::Void B07657267F1B9280(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E606D165FF9BCC82_B07657267F1B9280_OFFSET))(this, E937D4885DAA1AE8);
	}
};
