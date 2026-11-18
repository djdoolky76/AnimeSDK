#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJMMOAHCKPO.h"
#include "unitysdk/DCKAKFNNFEG.h"

class KGBFLHNJHHN;

#define POEFBGIJIJL_BFEKNHCDDGK_OFFSET UNITYSDK_OFFSET(0x1F293FC0)
#define POEFBGIJIJL_ECBIBMENHNH_OFFSET UNITYSDK_OFFSET(0x1F293EA0)
#define POEFBGIJIJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F293E90)

inline static constexpr unsigned int POEFBGIJIJL_TypeDefinitionIndex = 13065;

class POEFBGIJIJL : public ::DJMMOAHCKPO
{
public:
	::System::Void _ctor(::DCKAKFNNFEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCKAKFNNFEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + POEFBGIJIJL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ECBIBMENHNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFBGIJIJL_ECBIBMENHNH_OFFSET))(this);
	}

	::System::Int32 BFEKNHCDDGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFBGIJIJL_BFEKNHCDDGK_OFFSET))(this);
	}
};
