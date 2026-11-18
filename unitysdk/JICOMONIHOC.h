#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define JICOMONIHOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D98AC40)

inline static constexpr unsigned int JICOMONIHOC_TypeDefinitionIndex = 94010;

class JICOMONIHOC : public ::CGGLJLECNJM
{
public:
	::System::Single EAFIKNKFGGI; // 0x20
	::System::Single KMKBJKOEBMF; // 0x24
	::System::Boolean IBKCKIHKBDP; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 EBKDOFEBHGJ; // 0x2C
	::System::Single FMBEBCCMENL; // 0x30
	::System::Single GKDIJIKAFGH; // 0x34
	::System::Single JBGLCAFPGHK; // 0x38
	::System::Int32 IABBFDMGAPH; // 0x3C
	::System::Single FLAPGDKOEKJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICOMONIHOC__CTOR_OFFSET))(this);
	}
};
