#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKIDNCBAAMM.h"
#include "unitysdk/NALFJGBLGHD.h"

class KGBFLHNJHHN;

#define JBDIABHJBPE_ABLPMLFHCDI_OFFSET UNITYSDK_OFFSET(0x1B7D6A10)
#define JBDIABHJBPE_OIAEDDPIFHD_OFFSET UNITYSDK_OFFSET(0x1B7D6A00)
#define JBDIABHJBPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D69F0)

inline static constexpr unsigned int JBDIABHJBPE_TypeDefinitionIndex = 16516;

class JBDIABHJBPE : public ::FKIDNCBAAMM
{
public:
	::System::Void _ctor(::NALFJGBLGHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NALFJGBLGHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JBDIABHJBPE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean OIAEDDPIFHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDIABHJBPE_OIAEDDPIFHD_OFFSET))(this);
	}

	::System::Int32 ABLPMLFHCDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDIABHJBPE_ABLPMLFHCDI_OFFSET))(this);
	}
};
