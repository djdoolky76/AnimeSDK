#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B4D493BC2F860B62.h"

#define E06BB71CD1F0BFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E06BB71CD1F0BFAE_TypeDefinitionIndex = 7458;

class E06BB71CD1F0BFAE : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::B4D493BC2F860B62 AFAE5A9B3F680BD1; // 0x38
	::System::UInt32 AF1DCC00ADB5DE29; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E06BB71CD1F0BFAE__CTOR_OFFSET))(this);
	}
};
