#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHMDKHINFOP.h"
#include "unitysdk/HBLNGFMGFAG.h"

class ENPKLOLPHDM;
class KGBFLHNJHHN;

#define CJMGLINLAJA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB775E0)
#define CJMGLINLAJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB775D0)

inline static constexpr unsigned int CJMGLINLAJA_TypeDefinitionIndex = 93599;

class CJMGLINLAJA : public ::BHMDKHINFOP
{
public:
	::System::Void _ctor(::HBLNGFMGFAG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HBLNGFMGFAG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CJMGLINLAJA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::ENPKLOLPHDM* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENPKLOLPHDM*))((::PBYTE)hIl2Cpp + CJMGLINLAJA_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
