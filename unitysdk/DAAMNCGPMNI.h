#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define DAAMNCGPMNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6EE340)
#define DAAMNCGPMNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x6EE280)
#define DAAMNCGPMNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6EE350)
#define DAAMNCGPMNI_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6EE410)
#define DAAMNCGPMNI_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x12B9B400)
#define DAAMNCGPMNI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6EE480)
#define DAAMNCGPMNI_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x12B9B530)

inline static constexpr unsigned int DAAMNCGPMNI_TypeDefinitionIndex = 75823;

struct alignas(4) DAAMNCGPMNI
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::System::Single NOOKCKAIIMI; // 0x1C
	::System::Single IKOFJEHPPAN; // 0x20

	/*
	::System::Boolean Equals(::DAAMNCGPMNI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DAAMNCGPMNI))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::DAAMNCGPMNI KILPCOMOCMD, ::DAAMNCGPMNI BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DAAMNCGPMNI, ::DAAMNCGPMNI))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::DAAMNCGPMNI KILPCOMOCMD, ::DAAMNCGPMNI BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DAAMNCGPMNI, ::DAAMNCGPMNI))((::PBYTE)hIl2Cpp + DAAMNCGPMNI_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
