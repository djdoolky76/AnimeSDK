#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define PHGGJMIEMHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6A36A0)
#define PHGGJMIEMHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x6A3690)
#define PHGGJMIEMHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6A3780)
#define PHGGJMIEMHO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6A3800)
#define PHGGJMIEMHO_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1197C6D0)
#define PHGGJMIEMHO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6A3790)
#define PHGGJMIEMHO_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1197C590)

inline static constexpr unsigned int PHGGJMIEMHO_TypeDefinitionIndex = 92133;

struct alignas(8) PHGGJMIEMHO
{
	::System::UInt32 AOGNNJLKHGL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* AOLGDHDOCLP; // 0x18
	::System::String* DHNCBNALKCB; // 0x20

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::PHGGJMIEMHO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PHGGJMIEMHO))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::PHGGJMIEMHO JBELLEJJOLM, ::PHGGJMIEMHO FAHOINCMMCB)
	{
		return ((::System::Boolean(*)(::PHGGJMIEMHO, ::PHGGJMIEMHO))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_NOGJIJMACNO_OFFSET))(JBELLEJJOLM, FAHOINCMMCB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::PHGGJMIEMHO JBELLEJJOLM, ::PHGGJMIEMHO FAHOINCMMCB)
	{
		return ((::System::Boolean(*)(::PHGGJMIEMHO, ::PHGGJMIEMHO))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_INCFIJKMIGG_OFFSET))(JBELLEJJOLM, FAHOINCMMCB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGGJMIEMHO_HLPHPBAODIF_OFFSET))(this);
	}
};
