#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMFLEAHPDB.h"
#include "unitysdk/HFOHLKOLPEI.h"

class KGBFLHNJHHN;

#define PHNOBNJLHKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBFED0)

inline static constexpr unsigned int PHNOBNJLHKM_TypeDefinitionIndex = 16710;

class PHNOBNJLHKM : public ::DIMFLEAHPDB
{
public:
	::System::Void _ctor(::HFOHLKOLPEI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HFOHLKOLPEI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PHNOBNJLHKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}
};
