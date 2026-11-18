#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGFCBHOLJE.h"
#include "unitysdk/System/ValueType.h"

#define LHHKINOLBFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x52F8E0)
#define LHHKINOLBFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x52F890)

inline static constexpr unsigned int LHHKINOLBFC_TypeDefinitionIndex = 81904;

struct alignas(4) LHHKINOLBFC
{
	::System::Int32 GetHashCode(::NPGFCBHOLJE KHGFAKJKDGG)
	{
		return ((::System::Int32(*)(::PVOID, ::NPGFCBHOLJE))((::PBYTE)hIl2Cpp + LHHKINOLBFC_GETHASHCODE_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean Equals(::NPGFCBHOLJE HAAEBCOBKFF, ::NPGFCBHOLJE BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPGFCBHOLJE, ::NPGFCBHOLJE))((::PBYTE)hIl2Cpp + LHHKINOLBFC_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
