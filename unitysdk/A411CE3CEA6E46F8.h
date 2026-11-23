#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F83A4119D9D8C3D8;

#define A411CE3CEA6E46F8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A411CE3CEA6E46F8_TypeDefinitionIndex = 9206;

class A411CE3CEA6E46F8 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B398D24F33F54A05; // 0x38
	::System::Boolean BAF82BA911450307; // 0x3C
	::System::Byte _padding0[0x3];
	::F83A4119D9D8C3D8* B28BA4E26D3CE8FE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A411CE3CEA6E46F8__CTOR_OFFSET))(this);
	}
};
