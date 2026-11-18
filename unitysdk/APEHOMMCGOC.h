#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNACDHFHEP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define APEHOMMCGOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7080D0)
#define APEHOMMCGOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x708080)
#define APEHOMMCGOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7080E0)
#define APEHOMMCGOC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7081E0)
#define APEHOMMCGOC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13601870)
#define APEHOMMCGOC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x708180)
#define APEHOMMCGOC_KAAFEMKCCDE_OFFSET UNITYSDK_OFFSET(0x708130)
#define APEHOMMCGOC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x136017A0)
#define APEHOMMCGOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13601760)
#define APEHOMMCGOC__CTOR_OFFSET UNITYSDK_OFFSET(0x708010)

inline static constexpr unsigned int APEHOMMCGOC_TypeDefinitionIndex = 74553;

struct alignas(4) APEHOMMCGOC
{
	static ::APEHOMMCGOC* StaticGet_FMLAMIHGLDH()
	{
		return (::APEHOMMCGOC*)Il2CppClass::FromTypeDefinitionIndex(APEHOMMCGOC_TypeDefinitionIndex)->GetStaticField(0x116C0);
	}
	static ::APEHOMMCGOC* StaticGet_HPLLKDFLOJP()
	{
		return (::APEHOMMCGOC*)Il2CppClass::FromTypeDefinitionIndex(APEHOMMCGOC_TypeDefinitionIndex)->GetStaticField(0x116C1);
	}
	static ::APEHOMMCGOC* StaticGet_HICEJEACBGD()
	{
		return (::APEHOMMCGOC*)Il2CppClass::FromTypeDefinitionIndex(APEHOMMCGOC_TypeDefinitionIndex)->GetStaticField(0x116C2);
	}
	static ::APEHOMMCGOC* StaticGet_FDJHEBHLJLD()
	{
		return (::APEHOMMCGOC*)Il2CppClass::FromTypeDefinitionIndex(APEHOMMCGOC_TypeDefinitionIndex)->GetStaticField(0x116C3);
	}
	static ::APEHOMMCGOC* StaticGet_KBFLGFIIALE()
	{
		return (::APEHOMMCGOC*)Il2CppClass::FromTypeDefinitionIndex(APEHOMMCGOC_TypeDefinitionIndex)->GetStaticField(0x116C4);
	}
	::FJNACDHFHEP AAEDPMHMDIK; // 0x10

	::System::Void _ctor(::FJNACDHFHEP MIDGBLDKHMI)
	{
		return ((::System::Void(*)(::PVOID, ::FJNACDHFHEP))((::PBYTE)hIl2Cpp + APEHOMMCGOC__CTOR_OFFSET))(this, MIDGBLDKHMI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEHOMMCGOC__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::APEHOMMCGOC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::APEHOMMCGOC))((::PBYTE)hIl2Cpp + APEHOMMCGOC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APEHOMMCGOC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEHOMMCGOC_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::APEHOMMCGOC KILPCOMOCMD, ::APEHOMMCGOC BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::APEHOMMCGOC, ::APEHOMMCGOC))((::PBYTE)hIl2Cpp + APEHOMMCGOC_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean KAAFEMKCCDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APEHOMMCGOC_KAAFEMKCCDE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::APEHOMMCGOC KILPCOMOCMD, ::APEHOMMCGOC BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::APEHOMMCGOC, ::APEHOMMCGOC))((::PBYTE)hIl2Cpp + APEHOMMCGOC_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APEHOMMCGOC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEHOMMCGOC_HLPHPBAODIF_OFFSET))(this);
	}
};
