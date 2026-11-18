#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKBGOODPALC.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define DGAAOFJBCEE_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1E1BB500)
#define DGAAOFJBCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB550)

inline static constexpr unsigned int DGAAOFJBCEE_TypeDefinitionIndex = 93556;

class DGAAOFJBCEE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAAOFJBCEE__CTOR_OFFSET))(this);
	}

	::EKBGOODPALC MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EKBGOODPALC(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + DGAAOFJBCEE_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
