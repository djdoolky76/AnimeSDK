#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4A2748143F3AEF6.h"

class AB642D1382756991;

#define A65A1C639BE35A56__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A65A1C639BE35A56_TypeDefinitionIndex = 1758;

class A65A1C639BE35A56 : public ::F4A2748143F3AEF6
{
public:
	::System::UInt32 ED431A999C4643EE; // 0x10
	::System::Byte _padding0[0x4];
	::AB642D1382756991* B0DCF7E2583C7406; // 0x18
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A1C639BE35A56__CTOR_OFFSET))(this);
	}
};
