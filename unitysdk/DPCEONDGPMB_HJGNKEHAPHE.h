#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BALOLNHHBDA;

#define DPCEONDGPMB_HJGNKEHAPHE_CBCKPHHMFBN_OFFSET UNITYSDK_OFFSET(0xFDCC830)
#define DPCEONDGPMB_HJGNKEHAPHE__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCC820)

inline static constexpr unsigned int DPCEONDGPMB_HJGNKEHAPHE_TypeDefinitionIndex = 91695;

class DPCEONDGPMB_HJGNKEHAPHE : public ::System::Object
{
public:
	::BALOLNHHBDA* GNAIIPBHAHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_HJGNKEHAPHE__CTOR_OFFSET))(this);
	}

	::System::Boolean CBCKPHHMFBN(::System::Int32 ALBNFNCECKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_HJGNKEHAPHE_CBCKPHHMFBN_OFFSET))(this, ALBNFNCECKJ);
	}
};
