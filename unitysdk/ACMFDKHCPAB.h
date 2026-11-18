#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define ACMFDKHCPAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79D400)
#define ACMFDKHCPAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x79D330)
#define ACMFDKHCPAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79D410)
#define ACMFDKHCPAB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x79D540)
#define ACMFDKHCPAB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x16D61D60)
#define ACMFDKHCPAB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x79D4D0)
#define ACMFDKHCPAB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x16D61C10)

inline static constexpr unsigned int ACMFDKHCPAB_TypeDefinitionIndex = 53637;

struct alignas(4) ACMFDKHCPAB
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::System::Single NCCANDLFHEG; // 0x1C
	::System::Single LBKOLHLEGCG; // 0x20
	::System::Single OMBGDAKFDFK; // 0x24
	::System::Single IKOFJEHPPAN; // 0x28
	::System::Single NOOKCKAIIMI; // 0x2C

	/*
	::System::Boolean Equals(::ACMFDKHCPAB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ACMFDKHCPAB))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::ACMFDKHCPAB KILPCOMOCMD, ::ACMFDKHCPAB BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::ACMFDKHCPAB, ::ACMFDKHCPAB))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::ACMFDKHCPAB KILPCOMOCMD, ::ACMFDKHCPAB BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::ACMFDKHCPAB, ::ACMFDKHCPAB))((::PBYTE)hIl2Cpp + ACMFDKHCPAB_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
