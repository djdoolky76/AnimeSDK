#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDMOCHHLGB.h"
#include "unitysdk/NOEODPCIHNP.h"

class KGBFLHNJHHN;

#define IDJEKAIKGNC_FKLDAPIJFGK_OFFSET UNITYSDK_OFFSET(0x1D3E4B50)
#define IDJEKAIKGNC_GEBKKABEHMA_OFFSET UNITYSDK_OFFSET(0x1D3DE010)
#define IDJEKAIKGNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E4B40)

inline static constexpr unsigned int IDJEKAIKGNC_TypeDefinitionIndex = 93637;

class IDJEKAIKGNC : public ::BNDMOCHHLGB
{
public:
	::System::Void _ctor(::NOEODPCIHNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOEODPCIHNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IDJEKAIKGNC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean GEBKKABEHMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJEKAIKGNC_GEBKKABEHMA_OFFSET))(this);
	}

	::System::Boolean FKLDAPIJFGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJEKAIKGNC_FKLDAPIJFGK_OFFSET))(this);
	}
};
