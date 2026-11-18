#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJPJOFELEKI.h"
#include "unitysdk/APPOGNAPFOM.h"

class KGBFLHNJHHN;

#define NCAHANJMPAC_EPDJAEEMIBD_OFFSET UNITYSDK_OFFSET(0x19DBCE60)
#define NCAHANJMPAC_NBNGCCPFPIK_OFFSET UNITYSDK_OFFSET(0x19DBCE40)
#define NCAHANJMPAC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBCE30)

inline static constexpr unsigned int NCAHANJMPAC_TypeDefinitionIndex = 16988;

class NCAHANJMPAC : public ::HJPJOFELEKI
{
public:
	::System::Void _ctor(::APPOGNAPFOM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::APPOGNAPFOM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCAHANJMPAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean NBNGCCPFPIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAHANJMPAC_NBNGCCPFPIK_OFFSET))(this);
	}

	::System::Boolean EPDJAEEMIBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAHANJMPAC_EPDJAEEMIBD_OFFSET))(this);
	}
};
