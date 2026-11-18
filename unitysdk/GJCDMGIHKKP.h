#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POCGKEPEKBL.h"
#include "unitysdk/EFGPBPKINFJ.h"

class KGBFLHNJHHN;

#define GJCDMGIHKKP_EAMIJGCCGFK_OFFSET UNITYSDK_OFFSET(0x160E49D0)
#define GJCDMGIHKKP__CTOR_OFFSET UNITYSDK_OFFSET(0x160E49C0)

inline static constexpr unsigned int GJCDMGIHKKP_TypeDefinitionIndex = 9838;

class GJCDMGIHKKP : public ::POCGKEPEKBL
{
public:
	::System::Void _ctor(::EFGPBPKINFJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFGPBPKINFJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GJCDMGIHKKP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean EAMIJGCCGFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCDMGIHKKP_EAMIJGCCGFK_OFFSET))(this);
	}
};
