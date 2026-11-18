#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPAFEAHBPBL.h"
#include "unitysdk/System/Object.h"

#define EKHNNCDBODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C510)

inline static constexpr unsigned int EKHNNCDBODE_TypeDefinitionIndex = 48017;

class EKHNNCDBODE : public ::System::Object
{
public:
	::MPAFEAHBPBL LLEPLCNIGKE; // 0x10
	::System::Single EMAPHHGKFON; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHNNCDBODE__CTOR_OFFSET))(this);
	}
};
