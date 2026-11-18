#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define HIHNKMMCLEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8EACF0)
#define HIHNKMMCLEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EACE0)
#define HIHNKMMCLEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8EADD0)
#define HIHNKMMCLEB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8EAE40)
#define HIHNKMMCLEB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8EADE0)
#define HIHNKMMCLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9BF0)

inline static constexpr unsigned int HIHNKMMCLEB_TypeDefinitionIndex = 93784;

struct alignas(4) HIHNKMMCLEB
{
	::System::Single FGMJPHFBNHN; // 0x10
	::System::Boolean PJPEFGIBPKG; // 0x14

	::System::Void _ctor(::System::Single PEEHMLDPKPJ, ::System::Boolean OCCGEFKBKHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HIHNKMMCLEB__CTOR_OFFSET))(this, PEEHMLDPKPJ, OCCGEFKBKHC);
	}

	/*
	::System::Boolean Equals(::HIHNKMMCLEB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HIHNKMMCLEB))((::PBYTE)hIl2Cpp + HIHNKMMCLEB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIHNKMMCLEB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHNKMMCLEB_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIHNKMMCLEB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHNKMMCLEB_HLPHPBAODIF_OFFSET))(this);
	}
};
