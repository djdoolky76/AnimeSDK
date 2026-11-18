#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCONJOMJABJ.h"

class FKLMDAMIFBF;

#define ABIBGBCKKED_FFOOPJIJPHC_OFFSET UNITYSDK_OFFSET(0x154C9E20)
#define ABIBGBCKKED_MLHLMLIOHAO_OFFSET UNITYSDK_OFFSET(0x154C9D90)
#define ABIBGBCKKED__CTOR_OFFSET UNITYSDK_OFFSET(0x154C9D60)

inline static constexpr unsigned int ABIBGBCKKED_TypeDefinitionIndex = 79936;

class ABIBGBCKKED : public ::MCONJOMJABJ
{
public:
	::System::Void _ctor(::FKLMDAMIFBF* HMOIMNEIIAK)
	{
		return ((::System::Void(*)(::PVOID, ::FKLMDAMIFBF*))((::PBYTE)hIl2Cpp + ABIBGBCKKED__CTOR_OFFSET))(this, HMOIMNEIIAK);
	}

	::System::Void MLHLMLIOHAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIBGBCKKED_MLHLMLIOHAO_OFFSET))(this);
	}

	::System::Void FFOOPJIJPHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIBGBCKKED_FFOOPJIJPHC_OFFSET))(this);
	}
};
