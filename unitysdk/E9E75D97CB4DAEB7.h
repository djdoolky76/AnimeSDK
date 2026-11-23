#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A4B71233ECE11999.h"
#include "unitysdk/E379DE61A548837D.h"

#define E9E75D97CB4DAEB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9E75D97CB4DAEB7_TypeDefinitionIndex = 8469;

class E9E75D97CB4DAEB7 : public ::E379DE61A548837D
{
public:
	::A4B71233ECE11999 E8E19BDF7438D514; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E75D97CB4DAEB7__CTOR_OFFSET))(this);
	}
};
