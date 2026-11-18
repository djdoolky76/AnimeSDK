#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define EFMAJPHGFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E876B40)

inline static constexpr unsigned int EFMAJPHGFCC_TypeDefinitionIndex = 94882;

class EFMAJPHGFCC : public ::CGGLJLECNJM
{
public:
	::System::Boolean PAKOBHFGLEE; // 0x20
	::System::Byte _padding0[0x3];
	::JGLIFHIAIEH CKPGOKHECCH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMAJPHGFCC__CTOR_OFFSET))(this);
	}
};
