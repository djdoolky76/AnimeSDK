#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMCCKLAEJO.h"
#include "unitysdk/FDNFALFPENE.h"

class KGBFLHNJHHN;

#define JIGEMPBBFCM_MOLDOGPCEAH_OFFSET UNITYSDK_OFFSET(0x1A5ED340)
#define JIGEMPBBFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ED330)

inline static constexpr unsigned int JIGEMPBBFCM_TypeDefinitionIndex = 12398;

class JIGEMPBBFCM : public ::BIMCCKLAEJO
{
public:
	::System::Void _ctor(::FDNFALFPENE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDNFALFPENE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JIGEMPBBFCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MOLDOGPCEAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGEMPBBFCM_MOLDOGPCEAH_OFFSET))(this);
	}
};
