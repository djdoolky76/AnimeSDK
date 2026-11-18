#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/MOFKLDMEJGA.h"

#define JKJCECJEGAF_BJCJOPOJHGJ_OFFSET UNITYSDK_OFFSET(0x71FE00)
#define JKJCECJEGAF_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x71FD90)

inline static constexpr unsigned int JKJCECJEGAF_TypeDefinitionIndex = 42223;

struct alignas(4) JKJCECJEGAF
{
	::System::Void IAFHBCHLBME(::MOFKLDMEJGA& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MOFKLDMEJGA&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JKJCECJEGAF_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void BJCJOPOJHGJ(::MOFKLDMEJGA& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MOFKLDMEJGA&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JKJCECJEGAF_BJCJOPOJHGJ_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
