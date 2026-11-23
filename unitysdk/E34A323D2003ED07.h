#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4A2748143F3AEF6.h"

class AB642D1382756991;
namespace ABC::Splines::CatmullRom { class Spline; }

#define E34A323D2003ED07__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E34A323D2003ED07_TypeDefinitionIndex = 1512;

class E34A323D2003ED07 : public ::F4A2748143F3AEF6
{
public:
	::System::UInt32 BE47F4C7DA986AE9; // 0x10
	::System::Byte _padding0[0x4];
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x18
	::AB642D1382756991* B0DCF7E2583C7406; // 0x20
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E34A323D2003ED07__CTOR_OFFSET))(this);
	}
};
