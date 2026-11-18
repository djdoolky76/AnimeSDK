#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHBDCIEJOEE.h"
#include "unitysdk/NCBLPPDCJJN.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CKDDEPIPKOH_AGFFGAGMFBM_OFFSET UNITYSDK_OFFSET(0x195050E0)
#define CKDDEPIPKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x195050F0)

inline static constexpr unsigned int CKDDEPIPKOH_TypeDefinitionIndex = 10459;

class CKDDEPIPKOH : public ::JHBDCIEJOEE
{
public:
	::System::Void _ctor(::NCBLPPDCJJN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NCBLPPDCJJN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CKDDEPIPKOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* AGFFGAGMFBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDEPIPKOH_AGFFGAGMFBM_OFFSET))(this);
	}
};
