#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define DPCKOJHNCPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0B40)

inline static constexpr unsigned int DPCKOJHNCPK_TypeDefinitionIndex = 94556;

class DPCKOJHNCPK : public ::CGGLJLECNJM
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x20
	::System::Int32 AIPCPNEEOML; // 0x24
	::JGLIFHIAIEH CKPGOKHECCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCKOJHNCPK__CTOR_OFFSET))(this);
	}
};
