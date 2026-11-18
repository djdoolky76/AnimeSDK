#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define BIONDCFECGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6C90)

inline static constexpr unsigned int BIONDCFECGP_TypeDefinitionIndex = 93389;

class BIONDCFECGP : public ::CGGLJLECNJM
{
public:
	::System::Single GKDIJIKAFGH; // 0x20
	::System::Single FLAPGDKOEKJ; // 0x24
	::System::Int32 IABBFDMGAPH; // 0x28
	::System::Single NCCDJLDKFGA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIONDCFECGP__CTOR_OFFSET))(this);
	}
};
