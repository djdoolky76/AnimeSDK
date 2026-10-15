#pragma once
#include "unitysdk/unitysdk.h"
class BOJOBHMEEIH;
class LCDEEKNHPBG;

#define KOINLDBGPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

inline static constexpr unsigned int KOINLDBGPJB_TypeDefinitionIndex = 79153;

	struct alignas(8) KOINLDBGPJB
	{
		::BOJOBHMEEIH* CHOACOECNII; // 0x10
		::LCDEEKNHPBG* DFANLCNANOK; // 0x18
		::System::Void _ctor(::BOJOBHMEEIH* a1, ::LCDEEKNHPBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*, ::LCDEEKNHPBG*))((::PBYTE)hIl2Cpp + KOINLDBGPJB_CTOR_OFFSET))(this, a1, a2);
		}

	};
