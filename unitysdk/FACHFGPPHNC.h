#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FACHFGPPHNC_ABABHKGPNGC_OFFSET UNITYSDK_OFFSET(0x655900)
#define FACHFGPPHNC_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x655810)
#define FACHFGPPHNC_COMPARETO_OFFSET UNITYSDK_OFFSET(0x655800)
#define FACHFGPPHNC_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x655900)
#define FACHFGPPHNC_DNPCBKOIGDP_OFFSET UNITYSDK_OFFSET(0x6558B0)
#define FACHFGPPHNC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x655830)
#define FACHFGPPHNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x655820)
#define FACHFGPPHNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x6557F0)
#define FACHFGPPHNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x655720)
#define FACHFGPPHNC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x655A30)
#define FACHFGPPHNC_IIKFMNBEBEI_OFFSET UNITYSDK_OFFSET(0x10F51A80)
#define FACHFGPPHNC_INCFIJKMIGG_1_OFFSET UNITYSDK_OFFSET(0x10F51DA0)
#define FACHFGPPHNC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x10F51CD0)
#define FACHFGPPHNC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6559D0)
#define FACHFGPPHNC_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x10F51F90)
#define FACHFGPPHNC_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x10F51B80)
#define FACHFGPPHNC_METHOD_19_OFFSET UNITYSDK_OFFSET(0x6558B0)
#define FACHFGPPHNC_METHOD_22_1_OFFSET UNITYSDK_OFFSET(0x655900)
#define FACHFGPPHNC_NOGJIJMACNO_1_OFFSET UNITYSDK_OFFSET(0x10F520F0)
#define FACHFGPPHNC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x10F51E30)
#define FACHFGPPHNC_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x6558B0)
#define FACHFGPPHNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x655710)
#define FACHFGPPHNC__CTOR_OFFSET UNITYSDK_OFFSET(0x655630)

inline static constexpr unsigned int FACHFGPPHNC_TypeDefinitionIndex = 43178;

struct alignas(4) FACHFGPPHNC
{
	// static const ::System::Byte DDPIMPLICEG = 0xC9; // 0x0
	// static const ::System::Byte KIDAANFCJOA = 0x70; // 0x0
	// static const ::System::Byte HGBFCCBHMJI = 0xC9; // 0x0
	::System::UInt32 IFBPOMFHEOC; // 0x10

	::System::Void _ctor(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FACHFGPPHNC_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 CompareTo(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FACHFGPPHNC_COMPARETO_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Int32 CompareTo_1(::FACHFGPPHNC LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_COMPARETO_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean Equals_1(::FACHFGPPHNC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::FACHFGPPHNC IIKFMNBEBEI(::FACHFGPPHNC EJCBEJMGFAJ)
	{
		return ((::FACHFGPPHNC(*)(::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_IIKFMNBEBEI_OFFSET))(EJCBEJMGFAJ);
	}
	*/

	/*
	static ::System::Boolean JPPEEOLOGGP(::FACHFGPPHNC HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_JPPEEOLOGGP_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_PEOEBEBFIJO_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::FACHFGPPHNC EJCBEJMGFAJ, ::FACHFGPPHNC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FACHFGPPHNC, ::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG_1(::FACHFGPPHNC EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FACHFGPPHNC, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_INCFIJKMIGG_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::FACHFGPPHNC EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FACHFGPPHNC, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Void ABABHKGPNGC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_ABABHKGPNGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DJFKOKBPKNI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::FACHFGPPHNC JPPEEOLOGGP_1(::System::Boolean HFMHOELKCAJ)
	{
		return ((::FACHFGPPHNC(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_JPPEEOLOGGP_1_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FACHFGPPHNC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean DNPCBKOIGDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_DNPCBKOIGDP_OFFSET))(this);
	}

	::System::Boolean Method_19()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_METHOD_19_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO_1(::FACHFGPPHNC EJCBEJMGFAJ, ::FACHFGPPHNC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FACHFGPPHNC, ::FACHFGPPHNC))((::PBYTE)hIl2Cpp + FACHFGPPHNC_NOGJIJMACNO_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACHFGPPHNC_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void Method_22_1(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FACHFGPPHNC_METHOD_22_1_OFFSET))(this, EGEGIMGMJHN);
	}
};
