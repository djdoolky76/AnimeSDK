#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCONJOMJABJ.h"

class FKLMDAMIFBF;

#define CHEFAFEOHIB_FFOOPJIJPHC_OFFSET UNITYSDK_OFFSET(0x128F2840)
#define CHEFAFEOHIB_MLHLMLIOHAO_OFFSET UNITYSDK_OFFSET(0x128F27B0)
#define CHEFAFEOHIB__CTOR_OFFSET UNITYSDK_OFFSET(0x128F2780)

inline static constexpr unsigned int CHEFAFEOHIB_TypeDefinitionIndex = 73031;

class CHEFAFEOHIB : public ::MCONJOMJABJ
{
public:
	::System::Void _ctor(::FKLMDAMIFBF* HMOIMNEIIAK)
	{
		return ((::System::Void(*)(::PVOID, ::FKLMDAMIFBF*))((::PBYTE)hIl2Cpp + CHEFAFEOHIB__CTOR_OFFSET))(this, HMOIMNEIIAK);
	}

	::System::Void MLHLMLIOHAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEFAFEOHIB_MLHLMLIOHAO_OFFSET))(this);
	}

	::System::Void FFOOPJIJPHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEFAFEOHIB_FFOOPJIJPHC_OFFSET))(this);
	}
};
