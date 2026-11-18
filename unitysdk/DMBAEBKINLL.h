#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOEBHGKEJCM.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define DMBAEBKINLL_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1D6945C0)
#define DMBAEBKINLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6945A0)

inline static constexpr unsigned int DMBAEBKINLL_TypeDefinitionIndex = 93353;

class DMBAEBKINLL
{
public:
	::System::Int32 OICKCBPMPIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBAEBKINLL__CTOR_OFFSET))(this);
	}

	::FOEBHGKEJCM MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::FOEBHGKEJCM(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + DMBAEBKINLL_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
