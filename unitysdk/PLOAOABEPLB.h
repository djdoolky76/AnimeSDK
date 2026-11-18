#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGBHGLEOBNO.h"
#include "unitysdk/JHMPNBHDBMH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/LDEIMMJNANN.h"

class KGBFLHNJHHN;

#define PLOAOABEPLB_FDLJBAEFDMB_OFFSET UNITYSDK_OFFSET(0x1CBD0440)
#define PLOAOABEPLB_JOAPIMHDDOH_OFFSET UNITYSDK_OFFSET(0x1CBD05A0)
#define PLOAOABEPLB_LBLCNMNGJJF_OFFSET UNITYSDK_OFFSET(0x1CBD0710)
#define PLOAOABEPLB_OFJGEGGNBGF_OFFSET UNITYSDK_OFFSET(0x1CBD0660)
#define PLOAOABEPLB_POIHLKJLICH_OFFSET UNITYSDK_OFFSET(0x1CBD04F0)
#define PLOAOABEPLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD0430)

inline static constexpr unsigned int PLOAOABEPLB_TypeDefinitionIndex = 93566;

class PLOAOABEPLB : public ::HGBHGLEOBNO
{
public:
	::System::Nullable_1<::System::Single> JDBJINMAEBK; // 0x80
	::System::Nullable_1<::JHMPNBHDBMH> MMEDLGLOJAC; // 0x88

	::System::Void _ctor(::LDEIMMJNANN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDEIMMJNANN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PLOAOABEPLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single FDLJBAEFDMB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOAOABEPLB_FDLJBAEFDMB_OFFSET))(this);
	}

	::System::Single POIHLKJLICH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOAOABEPLB_POIHLKJLICH_OFFSET))(this);
	}

	::JHMPNBHDBMH JOAPIMHDDOH()
	{
		return ((::JHMPNBHDBMH(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOAOABEPLB_JOAPIMHDDOH_OFFSET))(this);
	}

	::System::Single OFJGEGGNBGF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOAOABEPLB_OFJGEGGNBGF_OFFSET))(this);
	}

	::System::Single LBLCNMNGJJF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOAOABEPLB_LBLCNMNGJJF_OFFSET))(this);
	}
};
