#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJMMOAHCKPO.h"
#include "unitysdk/DCKAKFNNFEG.h"

class GALJDOEOAGA;
class KGBFLHNJHHN;

#define KOLKIGMPHNK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB8C850)
#define KOLKIGMPHNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C840)

inline static constexpr unsigned int KOLKIGMPHNK_TypeDefinitionIndex = 94080;

class KOLKIGMPHNK : public ::DJMMOAHCKPO
{
public:
	::System::Void _ctor(::DCKAKFNNFEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCKAKFNNFEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KOLKIGMPHNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::GALJDOEOAGA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::GALJDOEOAGA*))((::PBYTE)hIl2Cpp + KOLKIGMPHNK_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
