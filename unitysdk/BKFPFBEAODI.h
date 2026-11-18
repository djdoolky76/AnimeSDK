#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKBGOODPALC.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define BKFPFBEAODI_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1D3D6030)
#define BKFPFBEAODI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D6080)

inline static constexpr unsigned int BKFPFBEAODI_TypeDefinitionIndex = 93315;

class BKFPFBEAODI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFPFBEAODI__CTOR_OFFSET))(this);
	}

	::EKBGOODPALC MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EKBGOODPALC(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + BKFPFBEAODI_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
