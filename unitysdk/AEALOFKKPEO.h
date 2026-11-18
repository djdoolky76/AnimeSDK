#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHGNHNOKCEH.h"
#include "unitysdk/KDKFMPABABD.h"

class AANAHAMFCNE;
class KGBFLHNJHHN;

#define AEALOFKKPEO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DAAC300)
#define AEALOFKKPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAC2F0)

inline static constexpr unsigned int AEALOFKKPEO_TypeDefinitionIndex = 93650;

class AEALOFKKPEO : public ::AHGNHNOKCEH
{
public:
	::System::Void _ctor(::KDKFMPABABD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KDKFMPABABD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AEALOFKKPEO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::AANAHAMFCNE* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::AANAHAMFCNE*))((::PBYTE)hIl2Cpp + AEALOFKKPEO_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
