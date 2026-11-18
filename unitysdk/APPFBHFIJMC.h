#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLGJMNALGGK.h"
#include "unitysdk/GJLMEDJDLJM.h"

class HAJFMOJBJHI;
class KGBFLHNJHHN;

#define APPFBHFIJMC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x124A9130)
#define APPFBHFIJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x124A9120)

inline static constexpr unsigned int APPFBHFIJMC_TypeDefinitionIndex = 94066;

class APPFBHFIJMC : public ::CLGJMNALGGK
{
public:
	::System::Void _ctor(::GJLMEDJDLJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GJLMEDJDLJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APPFBHFIJMC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::HAJFMOJBJHI* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::HAJFMOJBJHI*))((::PBYTE)hIl2Cpp + APPFBHFIJMC_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
