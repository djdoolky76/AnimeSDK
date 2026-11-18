#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APBKGAEFBND.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

#define PJMPHHEADIK__CTOR_OFFSET UNITYSDK_OFFSET(0x3F1BB0)

inline static constexpr unsigned int PJMPHHEADIK_TypeDefinitionIndex = 38507;

struct alignas(4) PJMPHHEADIK
{
	::Foundation::ViewObject::ViewObjectHandle JLAJKKDBBLB; // 0x10
	::APBKGAEFBND AMACCFAJILK; // 0x20

	::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM, ::APBKGAEFBND APKCFAOECFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::APBKGAEFBND))((::PBYTE)hIl2Cpp + PJMPHHEADIK__CTOR_OFFSET))(this, EAPIEMGDDMM, APKCFAOECFB);
	}
};
