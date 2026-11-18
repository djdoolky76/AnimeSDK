#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEBIFMKKDNM.h"
#include "unitysdk/ADAJLLHFFLG.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HMMANCFHEMF_PAANKHHAMOK_OFFSET UNITYSDK_OFFSET(0x19536B80)
#define HMMANCFHEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x19536B60)

inline static constexpr unsigned int HMMANCFHEMF_TypeDefinitionIndex = 16932;

class HMMANCFHEMF : public ::FEBIFMKKDNM
{
public:
	::System::Void _ctor(::ADAJLLHFFLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ADAJLLHFFLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HMMANCFHEMF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PAANKHHAMOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMANCFHEMF_PAANKHHAMOK_OFFSET))(this);
	}
};
