#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOINIKJJHGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9109B0)
#define MOINIKJJHGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x910960)
#define MOINIKJJHGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9109C0)
#define MOINIKJJHGA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x910A10)
#define MOINIKJJHGA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x910A70)
#define MOINIKJJHGA__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD30)

inline static constexpr unsigned int MOINIKJJHGA_TypeDefinitionIndex = 93482;

struct alignas(4) MOINIKJJHGA
{
	::OGEDMNDIDHA NEPOPIBBCAD; // 0x10

	::System::Void _ctor(::OGEDMNDIDHA AHGFFOPDGIH)
	{
		return ((::System::Void(*)(::PVOID, ::OGEDMNDIDHA))((::PBYTE)hIl2Cpp + MOINIKJJHGA__CTOR_OFFSET))(this, AHGFFOPDGIH);
	}

	/*
	::System::Boolean Equals(::MOINIKJJHGA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MOINIKJJHGA))((::PBYTE)hIl2Cpp + MOINIKJJHGA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOINIKJJHGA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOINIKJJHGA_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOINIKJJHGA_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOINIKJJHGA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
