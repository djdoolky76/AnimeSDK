#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEEMBHEOLKB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D88C20)

inline static constexpr unsigned int HEEMBHEOLKB_TypeDefinitionIndex = 88072;

class HEEMBHEOLKB : public ::System::Object
{
public:
	::System::Single HMJNBHBFKJD; // 0x10
	::System::Single LGHBDKAKCAM; // 0x14
	::System::Single KNAKPFIJCCC; // 0x18
	::System::Single PEGDOGOJGGE; // 0x1C
	::System::Single OLOFJOFHBAK; // 0x20
	::System::Single OLNAKPADPNB; // 0x24
	::System::Single GJKEIABGBKA; // 0x28
	::System::Int32 KAJJFNLDKPP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEMBHEOLKB__CTOR_OFFSET))(this);
	}
};
