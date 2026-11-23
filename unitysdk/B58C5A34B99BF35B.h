#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE1E11B808A636AE;

#define B58C5A34B99BF35B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B58C5A34B99BF35B_TypeDefinitionIndex = 16719;

class B58C5A34B99BF35B : public ::System::Object
{
public:
	::BE1E11B808A636AE* BC4C3E89C215906A; // 0x10
	::BE1E11B808A636AE* A48458EB1FB7BAC7; // 0x18
	::BE1E11B808A636AE* B4477650682C2B3C; // 0x20
	::BE1E11B808A636AE* A8F3ACC31333764D; // 0x28
	::System::Single A8F0A509E71EFE3F; // 0x30
	::System::Single BA0C56A2E1F0ADFA; // 0x34
	::System::Boolean B2B13B42DACF0AF0; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single AAE87FAC4275E989; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B58C5A34B99BF35B__CTOR_OFFSET))(this);
	}
};
