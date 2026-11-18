#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JDOLCBBOINH_COJJJHAGDBF_OFFSET UNITYSDK_OFFSET(0x18A09440)
#define JDOLCBBOINH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D2230)
#define JDOLCBBOINH_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D21D0)
#define JDOLCBBOINH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D2240)
#define JDOLCBBOINH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7D2290)
#define JDOLCBBOINH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7D22F0)
#define JDOLCBBOINH_PKPPKGAMKOC_OFFSET UNITYSDK_OFFSET(0x18A094F0)

inline static constexpr unsigned int JDOLCBBOINH_TypeDefinitionIndex = 47157;

struct alignas(4) JDOLCBBOINH
{
	::System::Int32 FCBGGJLANEB; // 0x10
	::System::Int32 BABGKDAEJFE; // 0x14

	/*
	::System::Boolean Equals(::JDOLCBBOINH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JDOLCBBOINH))((::PBYTE)hIl2Cpp + JDOLCBBOINH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDOLCBBOINH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOLCBBOINH_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOLCBBOINH_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::JDOLCBBOINH COJJJHAGDBF(::System::Int32 NJNOHDNDNAF)
	{
		return ((::JDOLCBBOINH(*)(::System::Int32))((::PBYTE)hIl2Cpp + JDOLCBBOINH_COJJJHAGDBF_OFFSET))(NJNOHDNDNAF);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDOLCBBOINH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::JDOLCBBOINH PKPPKGAMKOC(::System::Int32 FGLDMHFEJDI)
	{
		return ((::JDOLCBBOINH(*)(::System::Int32))((::PBYTE)hIl2Cpp + JDOLCBBOINH_PKPPKGAMKOC_OFFSET))(FGLDMHFEJDI);
	}
	*/
};
