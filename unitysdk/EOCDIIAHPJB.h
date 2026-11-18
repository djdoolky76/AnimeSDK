#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFPKCDOFBG.h"
#include "unitysdk/HKLADNCBIPB.h"

class AFGLPIBDNAN;
class KGBFLHNJHHN;

#define EOCDIIAHPJB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB7A520)
#define EOCDIIAHPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7A510)

inline static constexpr unsigned int EOCDIIAHPJB_TypeDefinitionIndex = 94061;

class EOCDIIAHPJB : public ::DJFPKCDOFBG
{
public:
	::System::Void _ctor(::HKLADNCBIPB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKLADNCBIPB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EOCDIIAHPJB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::AFGLPIBDNAN* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::AFGLPIBDNAN*))((::PBYTE)hIl2Cpp + EOCDIIAHPJB_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
