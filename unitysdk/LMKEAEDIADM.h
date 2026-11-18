#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define LMKEAEDIADM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x720250)
#define LMKEAEDIADM_EQUALS_OFFSET UNITYSDK_OFFSET(0x7201F0)
#define LMKEAEDIADM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x720260)
#define LMKEAEDIADM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x720320)
#define LMKEAEDIADM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13D08190)
#define LMKEAEDIADM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7202C0)
#define LMKEAEDIADM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13D08100)

inline static constexpr unsigned int LMKEAEDIADM_TypeDefinitionIndex = 63301;

struct alignas(4) LMKEAEDIADM
{
	::System::UInt32 LJFEPOCHDNH; // 0x10
	::System::UInt32 ABDEGPMNMBP; // 0x14

	/*
	::System::Boolean Equals(::LMKEAEDIADM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LMKEAEDIADM))((::PBYTE)hIl2Cpp + LMKEAEDIADM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMKEAEDIADM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKEAEDIADM_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMKEAEDIADM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LMKEAEDIADM KILPCOMOCMD, ::LMKEAEDIADM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LMKEAEDIADM, ::LMKEAEDIADM))((::PBYTE)hIl2Cpp + LMKEAEDIADM_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::LMKEAEDIADM KILPCOMOCMD, ::LMKEAEDIADM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LMKEAEDIADM, ::LMKEAEDIADM))((::PBYTE)hIl2Cpp + LMKEAEDIADM_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKEAEDIADM_HLPHPBAODIF_OFFSET))(this);
	}
};
