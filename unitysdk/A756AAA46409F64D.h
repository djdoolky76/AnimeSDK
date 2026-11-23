#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define A756AAA46409F64D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A756AAA46409F64D_TypeDefinitionIndex = 1373;

class A756AAA46409F64D : public ::E379DE61A548837D
{
public:
	::System::Boolean E48D0203740B5BAA; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single FD9E28B525039E76; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A756AAA46409F64D__CTOR_OFFSET))(this);
	}
};
