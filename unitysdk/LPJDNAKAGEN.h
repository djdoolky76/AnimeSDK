#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class MHEGBELMLCF;
namespace System { class Object; }

#define LPJDNAKAGEN_CBLLDJLOJFC_OFFSET UNITYSDK_OFFSET(0x6DFA50)
#define LPJDNAKAGEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6DF930)
#define LPJDNAKAGEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x6DF920)
#define LPJDNAKAGEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6DF8D0)
#define LPJDNAKAGEN_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6DF990)
#define LPJDNAKAGEN_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x125A4060)
#define LPJDNAKAGEN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6DF9F0)
#define LPJDNAKAGEN_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x125A4140)
#define LPJDNAKAGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x6DF8B0)

inline static constexpr unsigned int LPJDNAKAGEN_TypeDefinitionIndex = 48917;

struct alignas(4) LPJDNAKAGEN
{
	::System::UInt32 KIDFCMBAFGM; // 0x10
	::System::UInt32 GCBBLCHMMKC; // 0x14

	::System::Void _ctor(::MHEGBELMLCF* GFAGLHLCKMI)
	{
		return ((::System::Void(*)(::PVOID, ::MHEGBELMLCF*))((::PBYTE)hIl2Cpp + LPJDNAKAGEN__CTOR_OFFSET))(this, GFAGLHLCKMI);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::LPJDNAKAGEN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPJDNAKAGEN))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::LPJDNAKAGEN KILPCOMOCMD, ::LPJDNAKAGEN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LPJDNAKAGEN, ::LPJDNAKAGEN))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LPJDNAKAGEN KILPCOMOCMD, ::LPJDNAKAGEN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LPJDNAKAGEN, ::LPJDNAKAGEN))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::Foundation::AssetPath CBLLDJLOJFC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDNAKAGEN_CBLLDJLOJFC_OFFSET))(this);
	}
};
