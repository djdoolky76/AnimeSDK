#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOMGFNMIMP.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define KNPKCDGKFEI_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1D6A1CB0)
#define KNPKCDGKFEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E2B0)

inline static constexpr unsigned int KNPKCDGKFEI_TypeDefinitionIndex = 94101;

class KNPKCDGKFEI
{
public:
	::System::Int32 DJJGLILJKEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKCDGKFEI__CTOR_OFFSET))(this);
	}

	::EFOMGFNMIMP MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EFOMGFNMIMP(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + KNPKCDGKFEI_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
