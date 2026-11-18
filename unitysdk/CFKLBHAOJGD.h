#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKBGOODPALC.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define CFKLBHAOJGD_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1DE47580)
#define CFKLBHAOJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE475D0)

inline static constexpr unsigned int CFKLBHAOJGD_TypeDefinitionIndex = 93812;

class CFKLBHAOJGD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKLBHAOJGD__CTOR_OFFSET))(this);
	}

	::EKBGOODPALC MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EKBGOODPALC(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + CFKLBHAOJGD_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
