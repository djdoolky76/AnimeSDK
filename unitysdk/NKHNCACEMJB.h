#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDLDPAPIAEB.h"
#include "unitysdk/KPJJEFMPAKB.h"

#define NKHNCACEMJB_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x650360)

inline static constexpr unsigned int NKHNCACEMJB_TypeDefinitionIndex = 59405;

struct alignas(4) NKHNCACEMJB
{
	::CDLDPAPIAEB KNDMMHPDPIB(::KPJJEFMPAKB IJICDJMDJKG)
	{
		return ((::CDLDPAPIAEB(*)(::PVOID, ::KPJJEFMPAKB))((::PBYTE)hIl2Cpp + NKHNCACEMJB_KNDMMHPDPIB_OFFSET))(this, IJICDJMDJKG);
	}
};
