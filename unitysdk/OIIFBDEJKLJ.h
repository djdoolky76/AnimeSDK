#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHJJDALEOM.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define OIIFBDEJKLJ_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6B84E0)

inline static constexpr unsigned int OIIFBDEJKLJ_TypeDefinitionIndex = 92123;

struct alignas(4) OIIFBDEJKLJ
{
	::CJHJJDALEOM NOOLOILNGPL; // 0x10
	::System::Int32 ELLGADEFBBO; // 0x14
	::MoleMole::EntityHandle FKNBFFACJPM; // 0x18

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIFBDEJKLJ_FFCPIEDHBDP_OFFSET))(this);
	}
};
