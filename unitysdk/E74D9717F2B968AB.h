#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

class E49A4DAA793AE022;

#define E74D9717F2B968AB_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1E0EFC0)
#define E74D9717F2B968AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E74D9717F2B968AB_TypeDefinitionIndex = 9451;

class E74D9717F2B968AB : public ::AB07E24B584983C1
{
public:
	::E49A4DAA793AE022* F3597127D1687748; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E74D9717F2B968AB__CTOR_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E74D9717F2B968AB_AFD5178090BD77F2_OFFSET))(this);
	}
};
