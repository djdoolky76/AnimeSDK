#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIOFLNBFOLK.h"
#include "unitysdk/DDHGCFBKHMN_JPMCLPBADFF.h"
#include "unitysdk/CBNENIDLGGK.h"

class KGBFLHNJHHN;

#define DDHGCFBKHMN_GKBMCGEOAHA_OFFSET UNITYSDK_OFFSET(0x1ADC31C0)
#define DDHGCFBKHMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC31B0)

inline static constexpr unsigned int DDHGCFBKHMN_TypeDefinitionIndex = 17017;

class DDHGCFBKHMN : public ::CIOFLNBFOLK
{
public:
	::System::Void _ctor(::CBNENIDLGGK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CBNENIDLGGK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDHGCFBKHMN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::DDHGCFBKHMN_JPMCLPBADFF GKBMCGEOAHA()
	{
		return ((::DDHGCFBKHMN_JPMCLPBADFF(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHGCFBKHMN_GKBMCGEOAHA_OFFSET))(this);
	}
};
