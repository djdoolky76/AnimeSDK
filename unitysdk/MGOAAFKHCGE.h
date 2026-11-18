#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKBGOODPALC.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define MGOAAFKHCGE_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1E2F77D0)
#define MGOAAFKHCGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6EA0)

inline static constexpr unsigned int MGOAAFKHCGE_TypeDefinitionIndex = 94335;

class MGOAAFKHCGE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOAAFKHCGE__CTOR_OFFSET))(this);
	}

	::EKBGOODPALC MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EKBGOODPALC(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + MGOAAFKHCGE_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
