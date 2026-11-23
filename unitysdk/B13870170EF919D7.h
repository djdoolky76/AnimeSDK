#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B6AE86B8D9446EE4;

#define B13870170EF919D7_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2820680)
#define B13870170EF919D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B13870170EF919D7_TypeDefinitionIndex = 16848;

class B13870170EF919D7 : public ::System::Object
{
public:
	::B6AE86B8D9446EE4* EA0D07F4EF21A5B5; // 0x10
	::System::Single FA804D0B901FF125; // 0x18
	::System::Int32 FB6C91A975661639; // 0x1C

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B13870170EF919D7_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B13870170EF919D7__CTOR_OFFSET))(this);
	}
};
