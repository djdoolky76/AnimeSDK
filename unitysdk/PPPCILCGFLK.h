#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define PPPCILCGFLK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7E0D60)
#define PPPCILCGFLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7E0BC0)
#define PPPCILCGFLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E0B60)
#define PPPCILCGFLK_FBJIJIMILJM_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define PPPCILCGFLK_FGFKLHBDFKI_OFFSET UNITYSDK_OFFSET(0x359150)
#define PPPCILCGFLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E0CB0)
#define PPPCILCGFLK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7E0DE0)
#define PPPCILCGFLK_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x194C4B10)
#define PPPCILCGFLK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7E0D00)
#define PPPCILCGFLK_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x194C4A60)
#define PPPCILCGFLK_PBMBDENEGLP_OFFSET UNITYSDK_OFFSET(0x359320)
#define PPPCILCGFLK_PKLKOLHENDN_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define PPPCILCGFLK_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x194C4B90)
#define PPPCILCGFLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7E0B50)
#define PPPCILCGFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int PPPCILCGFLK_TypeDefinitionIndex = 76653;

struct alignas(4) PPPCILCGFLK
{
	// static const ::System::String* DHLJHOHHNFF; // 0x0
	::System::Int32 _MNHALEIAIKM_k__BackingField; // 0x10
	::System::Int32 _FPDPPKGBFPD_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PPPCILCGFLK__CTOR_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::PPPCILCGFLK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPPCILCGFLK))((::PBYTE)hIl2Cpp + PPPCILCGFLK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPPCILCGFLK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 PKLKOLHENDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_PKLKOLHENDN_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPPCILCGFLK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::PPPCILCGFLK KILPCOMOCMD, ::PPPCILCGFLK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::PPPCILCGFLK, ::PPPCILCGFLK))((::PBYTE)hIl2Cpp + PPPCILCGFLK_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::PPPCILCGFLK PKOGNPKCHHE(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::PPPCILCGFLK(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PPPCILCGFLK_PKOGNPKCHHE_OFFSET))(EBCCPPJHLND, HFKIDEMMMBN);
	}
	*/

	::System::Int32 PBMBDENEGLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_PBMBDENEGLP_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FGFKLHBDFKI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPPCILCGFLK_FGFKLHBDFKI_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::PPPCILCGFLK KILPCOMOCMD, ::PPPCILCGFLK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::PPPCILCGFLK, ::PPPCILCGFLK))((::PBYTE)hIl2Cpp + PPPCILCGFLK_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCILCGFLK_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void FBJIJIMILJM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPPCILCGFLK_FBJIJIMILJM_OFFSET))(this, EGEGIMGMJHN);
	}
};
