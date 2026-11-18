#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define IMJEIKGMHMG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x725F40)
#define IMJEIKGMHMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x725ED0)
#define IMJEIKGMHMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x725E60)
#define IMJEIKGMHMG_FBJIJIMILJM_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define IMJEIKGMHMG_FGFKLHBDFKI_OFFSET UNITYSDK_OFFSET(0x359150)
#define IMJEIKGMHMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x725EE0)
#define IMJEIKGMHMG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x726030)
#define IMJEIKGMHMG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x141F9920)
#define IMJEIKGMHMG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x725FC0)
#define IMJEIKGMHMG_LJCNLOAFHCK_OFFSET UNITYSDK_OFFSET(0x363D60)
#define IMJEIKGMHMG_NIGBOOANNEH_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define IMJEIKGMHMG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x141F9880)
#define IMJEIKGMHMG_PBMBDENEGLP_OFFSET UNITYSDK_OFFSET(0x359320)
#define IMJEIKGMHMG_PKLKOLHENDN_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define IMJEIKGMHMG_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x141F9AA0)
#define IMJEIKGMHMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x725E50)
#define IMJEIKGMHMG__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int IMJEIKGMHMG_TypeDefinitionIndex = 57561;

struct alignas(4) IMJEIKGMHMG
{
	// static const ::System::String* DHLJHOHHNFF; // 0x0
	::System::Int32 _MNHALEIAIKM_k__BackingField; // 0x10
	::System::Int32 _FPDPPKGBFPD_k__BackingField; // 0x14
	::System::Int32 _BMKEAJJEAFN_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN, ::System::Int32 IFMNOIKBEKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IMJEIKGMHMG__CTOR_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN, IFMNOIKBEKN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::IMJEIKGMHMG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IMJEIKGMHMG))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::IMJEIKGMHMG KILPCOMOCMD, ::IMJEIKGMHMG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::IMJEIKGMHMG, ::IMJEIKGMHMG))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 PKLKOLHENDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_PKLKOLHENDN_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::IMJEIKGMHMG KILPCOMOCMD, ::IMJEIKGMHMG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::IMJEIKGMHMG, ::IMJEIKGMHMG))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 PBMBDENEGLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_PBMBDENEGLP_OFFSET))(this);
	}

	::System::Void FBJIJIMILJM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_FBJIJIMILJM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void FGFKLHBDFKI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_FGFKLHBDFKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LJCNLOAFHCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_LJCNLOAFHCK_OFFSET))(this);
	}

	::System::Void NIGBOOANNEH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_NIGBOOANNEH_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::IMJEIKGMHMG PKOGNPKCHHE(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN, ::System::Int32 IFMNOIKBEKN)
	{
		return ((::IMJEIKGMHMG(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IMJEIKGMHMG_PKOGNPKCHHE_OFFSET))(EBCCPPJHLND, HFKIDEMMMBN, IFMNOIKBEKN);
	}
	*/
};
