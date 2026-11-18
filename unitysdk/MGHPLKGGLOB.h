#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MGHPLKGGLOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x910840)
#define MGHPLKGGLOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x9107F0)
#define MGHPLKGGLOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x910850)
#define MGHPLKGGLOB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x910900)
#define MGHPLKGGLOB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x9108A0)
#define MGHPLKGGLOB__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD30)

inline static constexpr unsigned int MGHPLKGGLOB_TypeDefinitionIndex = 94095;

struct alignas(4) MGHPLKGGLOB
{
	::System::Boolean PEDANHBGIGE; // 0x10

	::System::Void _ctor(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGHPLKGGLOB__CTOR_OFFSET))(this, FBILHHBPEHD);
	}

	/*
	::System::Boolean Equals(::MGHPLKGGLOB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MGHPLKGGLOB))((::PBYTE)hIl2Cpp + MGHPLKGGLOB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHPLKGGLOB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHPLKGGLOB_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHPLKGGLOB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHPLKGGLOB_HLPHPBAODIF_OFFSET))(this);
	}
};
