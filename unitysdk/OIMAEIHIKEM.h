#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHHAEBJKNNH.h"
#include "unitysdk/System/ValueType.h"

#define OIMAEIHIKEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x5FADA0)
#define OIMAEIHIKEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FAD50)

inline static constexpr unsigned int OIMAEIHIKEM_TypeDefinitionIndex = 65930;

struct alignas(4) OIMAEIHIKEM
{
	::System::Int32 GetHashCode(::CHHAEBJKNNH KHGFAKJKDGG)
	{
		return ((::System::Int32(*)(::PVOID, ::CHHAEBJKNNH))((::PBYTE)hIl2Cpp + OIMAEIHIKEM_GETHASHCODE_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean Equals(::CHHAEBJKNNH HAAEBCOBKFF, ::CHHAEBJKNNH BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::CHHAEBJKNNH, ::CHHAEBJKNNH))((::PBYTE)hIl2Cpp + OIMAEIHIKEM_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
