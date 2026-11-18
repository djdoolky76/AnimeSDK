#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBPDOLCMLDP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define LABOFABFALH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x752E50)
#define LABOFABFALH_EQUALS_OFFSET UNITYSDK_OFFSET(0x752DF0)
#define LABOFABFALH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x752E60)
#define LABOFABFALH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x752EB0)
#define LABOFABFALH_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x15179730)
#define LABOFABFALH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x752F10)
#define LABOFABFALH_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15179890)
#define LABOFABFALH__CTOR_OFFSET UNITYSDK_OFFSET(0x393410)

inline static constexpr unsigned int LABOFABFALH_TypeDefinitionIndex = 82425;

struct alignas(4) LABOFABFALH
{
	::DBPDOLCMLDP KAMJLKGLFDB; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x14

	::System::Void _ctor(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32))((::PBYTE)hIl2Cpp + LABOFABFALH__CTOR_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH);
	}

	/*
	::System::Boolean Equals(::LABOFABFALH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LABOFABFALH))((::PBYTE)hIl2Cpp + LABOFABFALH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LABOFABFALH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABOFABFALH_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::LABOFABFALH KILPCOMOCMD, ::LABOFABFALH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LABOFABFALH, ::LABOFABFALH))((::PBYTE)hIl2Cpp + LABOFABFALH_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABOFABFALH_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LABOFABFALH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LABOFABFALH KILPCOMOCMD, ::LABOFABFALH BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LABOFABFALH, ::LABOFABFALH))((::PBYTE)hIl2Cpp + LABOFABFALH_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
