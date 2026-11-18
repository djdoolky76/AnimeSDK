#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDAAENBLFPJ.h"
#include "unitysdk/EBLMALJFFIJ.h"

class DEKJDGDAMFE;
class KGBFLHNJHHN;

#define AINOBNMJNKB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1EA0DA30)
#define AINOBNMJNKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0DA20)

inline static constexpr unsigned int AINOBNMJNKB_TypeDefinitionIndex = 94532;

class AINOBNMJNKB : public ::CDAAENBLFPJ
{
public:
	::System::Void _ctor(::EBLMALJFFIJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EBLMALJFFIJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AINOBNMJNKB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::DEKJDGDAMFE* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEKJDGDAMFE*))((::PBYTE)hIl2Cpp + AINOBNMJNKB_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
