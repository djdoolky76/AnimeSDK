#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E6ACEE90ABF15D6E_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x1CA4900)
#define E6ACEE90ABF15D6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6ACEE90ABF15D6E_TypeDefinitionIndex = 9693;

class E6ACEE90ABF15D6E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6ACEE90ABF15D6E__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6ACEE90ABF15D6E_A765A1D14770A303_OFFSET))(this);
	}
};
