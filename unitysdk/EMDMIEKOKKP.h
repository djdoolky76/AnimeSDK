#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FACMHNMKFEF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EMDMIEKOKKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A2850)
#define EMDMIEKOKKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A2800)
#define EMDMIEKOKKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A2860)
#define EMDMIEKOKKP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7A28B0)
#define EMDMIEKOKKP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x17246810)
#define EMDMIEKOKKP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7A2910)
#define EMDMIEKOKKP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x17246890)
#define EMDMIEKOKKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x172467D0)
#define EMDMIEKOKKP__CTOR_OFFSET UNITYSDK_OFFSET(0x7A2790)

inline static constexpr unsigned int EMDMIEKOKKP_TypeDefinitionIndex = 46378;

struct alignas(4) EMDMIEKOKKP
{
	static ::EMDMIEKOKKP* StaticGet_CABOHALIHCH()
	{
		return (::EMDMIEKOKKP*)Il2CppClass::FromTypeDefinitionIndex(EMDMIEKOKKP_TypeDefinitionIndex)->GetStaticField(0x12C40);
	}
	static ::EMDMIEKOKKP* StaticGet_HICEJEACBGD()
	{
		return (::EMDMIEKOKKP*)Il2CppClass::FromTypeDefinitionIndex(EMDMIEKOKKP_TypeDefinitionIndex)->GetStaticField(0x12C41);
	}
	static ::EMDMIEKOKKP* StaticGet_HIEHIBAAOLC()
	{
		return (::EMDMIEKOKKP*)Il2CppClass::FromTypeDefinitionIndex(EMDMIEKOKKP_TypeDefinitionIndex)->GetStaticField(0x12C42);
	}
	::FACMHNMKFEF AAEDPMHMDIK; // 0x10

	::System::Void _ctor(::FACMHNMKFEF MIDGBLDKHMI)
	{
		return ((::System::Void(*)(::PVOID, ::FACMHNMKFEF))((::PBYTE)hIl2Cpp + EMDMIEKOKKP__CTOR_OFFSET))(this, MIDGBLDKHMI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDMIEKOKKP__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::EMDMIEKOKKP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EMDMIEKOKKP))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::EMDMIEKOKKP KILPCOMOCMD, ::EMDMIEKOKKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EMDMIEKOKKP, ::EMDMIEKOKKP))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::EMDMIEKOKKP KILPCOMOCMD, ::EMDMIEKOKKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EMDMIEKOKKP, ::EMDMIEKOKKP))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMDMIEKOKKP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
