#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/IDBBPLGCLPM.h"
#include "unitysdk/KLNJEBIMFLC.h"
#include "unitysdk/System/ValueType.h"

#define AGDKKDAEJBG_GBLMOANKOMB_OFFSET UNITYSDK_OFFSET(0x727B50)
#define AGDKKDAEJBG_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x727B00)

inline static constexpr unsigned int AGDKKDAEJBG_TypeDefinitionIndex = 43666;

struct alignas(4) AGDKKDAEJBG
{
	::Foundation::ViewObject::ViewObjectHandle CCNFKAGMGLB; // 0x10
	::System::Int32 JLPFIGBEPFO; // 0x20
	::System::Int32 NKPFALNKJKI; // 0x24
	::System::Int32 FIONKBMPEJP; // 0x28
	::System::Int32 MMOKMHDPNKL; // 0x2C
	::System::Int32 NMGFMGAOAOF; // 0x30
	::System::Single CLELBCAGGMM; // 0x34
	::System::Int32 KIJINEMEFLA; // 0x38
	::System::Int32 AAKCHEGKNCP; // 0x3C
	::IDBBPLGCLPM HOBPGKIEPIE; // 0x40
	::KLNJEBIMFLC JPMJIDNFHBL; // 0x44

	::System::Boolean MJIMNNFEKNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDKKDAEJBG_MJIMNNFEKNB_OFFSET))(this);
	}

	::System::Void GBLMOANKOMB(::KLNJEBIMFLC JKBLDFBGBPK, ::System::Int32 EINBJCGFFFI)
	{
		return ((::System::Void(*)(::PVOID, ::KLNJEBIMFLC, ::System::Int32))((::PBYTE)hIl2Cpp + AGDKKDAEJBG_GBLMOANKOMB_OFFSET))(this, JKBLDFBGBPK, EINBJCGFFFI);
	}
};
