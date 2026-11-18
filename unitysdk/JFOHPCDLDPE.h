#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCIANIEIDEN.h"
#include "unitysdk/CDLDPAPIAEB.h"

#define JFOHPCDLDPE_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x7E8800)

inline static constexpr unsigned int JFOHPCDLDPE_TypeDefinitionIndex = 80969;

struct alignas(4) JFOHPCDLDPE
{
	::CDLDPAPIAEB KNDMMHPDPIB(::BCIANIEIDEN IJICDJMDJKG)
	{
		return ((::CDLDPAPIAEB(*)(::PVOID, ::BCIANIEIDEN))((::PBYTE)hIl2Cpp + JFOHPCDLDPE_KNDMMHPDPIB_OFFSET))(this, IJICDJMDJKG);
	}
};
