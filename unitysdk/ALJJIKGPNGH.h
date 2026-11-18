#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ALJJIKGPNGH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x99E140)
#define ALJJIKGPNGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x99E070)
#define ALJJIKGPNGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x99E020)
#define ALJJIKGPNGH_FMFDHJIEHNP_OFFSET UNITYSDK_OFFSET(0x1FD088A0)
#define ALJJIKGPNGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99E080)
#define ALJJIKGPNGH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x99E0E0)
#define ALJJIKGPNGH_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1FD08820)
#define ALJJIKGPNGH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x99E1C0)
#define ALJJIKGPNGH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x99E210)
#define ALJJIKGPNGH_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1FD08740)
#define ALJJIKGPNGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99E0D0)
#define ALJJIKGPNGH__CTOR_OFFSET UNITYSDK_OFFSET(0x36BC70)

inline static constexpr unsigned int ALJJIKGPNGH_TypeDefinitionIndex = 29117;

struct alignas(4) ALJJIKGPNGH
{
	::System::UInt16 GPIOJBLKFAJ; // 0x10

	::System::Void _ctor(::System::UInt16 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + ALJJIKGPNGH__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	::System::Boolean Equals(::ALJJIKGPNGH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALJJIKGPNGH))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::ALJJIKGPNGH KILPCOMOCMD, ::ALJJIKGPNGH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::ALJJIKGPNGH, ::ALJJIKGPNGH))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::ALJJIKGPNGH KILPCOMOCMD, ::ALJJIKGPNGH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::ALJJIKGPNGH, ::ALJJIKGPNGH))((::PBYTE)hIl2Cpp + ALJJIKGPNGH_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::ALJJIKGPNGH FMFDHJIEHNP()
	{
		return ((::ALJJIKGPNGH(*)())((::PBYTE)hIl2Cpp + ALJJIKGPNGH_FMFDHJIEHNP_OFFSET))();
	}
	*/
};
