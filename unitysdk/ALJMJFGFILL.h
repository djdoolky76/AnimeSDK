#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKPADCILABG.h"
#include "unitysdk/CDNLNJCIAPC.h"

class KGBFLHNJHHN;
class MBHDAJMBDPF;
namespace System { class String; }

#define ALJMJFGFILL_AJBFCHKHBFJ_OFFSET UNITYSDK_OFFSET(0x1A160640)
#define ALJMJFGFILL_PAANKHHAMOK_OFFSET UNITYSDK_OFFSET(0x1A160BD0)
#define ALJMJFGFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A160620)

inline static constexpr unsigned int ALJMJFGFILL_TypeDefinitionIndex = 16573;

class ALJMJFGFILL : public ::JKPADCILABG
{
public:
	::System::Void _ctor(::CDNLNJCIAPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDNLNJCIAPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALJMJFGFILL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::MBHDAJMBDPF* AJBFCHKHBFJ()
	{
		return ((::MBHDAJMBDPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJMJFGFILL_AJBFCHKHBFJ_OFFSET))(this);
	}

	::System::String* PAANKHHAMOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJMJFGFILL_PAANKHHAMOK_OFFSET))(this);
	}
};
