#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDLEABINEN.h"
#include "unitysdk/IGMBCDLFKLL.h"

#define KEIIIHCELLK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B77170)

inline static constexpr unsigned int KEIIIHCELLK_TypeDefinitionIndex = 44829;

class KEIIIHCELLK : public ::FMDLEABINEN
{
public:
	::System::Single KKDAIBFOLHC; // 0x20
	::System::Int32 KMEFDONCHLF; // 0x24
	::IGMBCDLFKLL CKFMGDLMMKF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIIIHCELLK__CTOR_OFFSET))(this);
	}
};
