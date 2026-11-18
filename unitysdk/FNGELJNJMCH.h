#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FNGELJNJMCH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x725150)
#define FNGELJNJMCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x725010)
#define FNGELJNJMCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x725000)
#define FNGELJNJMCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x725100)
#define FNGELJNJMCH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7251D0)
#define FNGELJNJMCH_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define FNGELJNJMCH_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x141138D0)
#define FNGELJNJMCH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x725230)
#define FNGELJNJMCH_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x359320)
#define FNGELJNJMCH_NGKCMNGOHBG_OFFSET UNITYSDK_OFFSET(0x359150)
#define FNGELJNJMCH_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14113840)
#define FNGELJNJMCH_OMNKIBJCAAN_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define FNGELJNJMCH_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x141139C0)
#define FNGELJNJMCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x724FF0)
#define FNGELJNJMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int FNGELJNJMCH_TypeDefinitionIndex = 44681;

struct alignas(4) FNGELJNJMCH
{
	// static const ::System::String* DHLJHOHHNFF; // 0x0
	::System::Int32 _LECPDNBPLPO_k__BackingField; // 0x10
	::System::Int32 _JGKMJIIFBED_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FNGELJNJMCH__CTOR_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::FNGELJNJMCH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNGELJNJMCH))((::PBYTE)hIl2Cpp + FNGELJNJMCH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNGELJNJMCH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_GETHASHCODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void OMNKIBJCAAN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNGELJNJMCH_OMNKIBJCAAN_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::FNGELJNJMCH KILPCOMOCMD, ::FNGELJNJMCH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FNGELJNJMCH, ::FNGELJNJMCH))((::PBYTE)hIl2Cpp + FNGELJNJMCH_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_MDPBPBNMKJA_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::FNGELJNJMCH KILPCOMOCMD, ::FNGELJNJMCH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FNGELJNJMCH, ::FNGELJNJMCH))((::PBYTE)hIl2Cpp + FNGELJNJMCH_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNGELJNJMCH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGELJNJMCH_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Void NGKCMNGOHBG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNGELJNJMCH_NGKCMNGOHBG_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::FNGELJNJMCH PKOGNPKCHHE(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::FNGELJNJMCH(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FNGELJNJMCH_PKOGNPKCHHE_OFFSET))(PKMFBJMJCOO, CJPLACFCFBP);
	}
	*/
};
