#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANPDHEIHGME.h"
#include "unitysdk/NHGAFEKICKP.h"

class KGBFLHNJHHN;

#define INNLDBBGMFK_JNPGMHDHMKC_OFFSET UNITYSDK_OFFSET(0x1A4FDC80)
#define INNLDBBGMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FDC70)

inline static constexpr unsigned int INNLDBBGMFK_TypeDefinitionIndex = 13238;

class INNLDBBGMFK : public ::ANPDHEIHGME
{
public:
	::System::Void _ctor(::NHGAFEKICKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHGAFEKICKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + INNLDBBGMFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JNPGMHDHMKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INNLDBBGMFK_JNPGMHDHMKC_OFFSET))(this);
	}
};
