#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFFPHICPKHL.h"
#include "unitysdk/DMPGCDPBLFG.h"

class CPEKDHMMNKA;
class KGBFLHNJHHN;

#define BHCOJILIOIJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB6A0B0)
#define BHCOJILIOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6A0A0)

inline static constexpr unsigned int BHCOJILIOIJ_TypeDefinitionIndex = 93922;

class BHCOJILIOIJ : public ::HFFPHICPKHL
{
public:
	::System::Void _ctor(::DMPGCDPBLFG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMPGCDPBLFG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BHCOJILIOIJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::CPEKDHMMNKA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::CPEKDHMMNKA*))((::PBYTE)hIl2Cpp + BHCOJILIOIJ_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
