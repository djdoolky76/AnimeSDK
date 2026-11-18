#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAGMJBCLOPD.h"
#include "unitysdk/FAEJGDEGEFP.h"

class HKPCJNBKCHD;
class KGBFLHNJHHN;

#define DCGDFOFHLLC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9F2060)
#define DCGDFOFHLLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F2050)

inline static constexpr unsigned int DCGDFOFHLLC_TypeDefinitionIndex = 93583;

class DCGDFOFHLLC : public ::NAGMJBCLOPD
{
public:
	::System::Void _ctor(::FAEJGDEGEFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAEJGDEGEFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCGDFOFHLLC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::HKPCJNBKCHD* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::HKPCJNBKCHD*))((::PBYTE)hIl2Cpp + DCGDFOFHLLC_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
