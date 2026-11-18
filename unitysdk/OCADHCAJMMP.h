#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OBCAIIPOJEO.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define OCADHCAJMMP_CBAFNGJMIGB_OFFSET UNITYSDK_OFFSET(0x3D3690)
#define OCADHCAJMMP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x794D80)
#define OCADHCAJMMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x794BD0)
#define OCADHCAJMMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x794950)
#define OCADHCAJMMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x794BE0)
#define OCADHCAJMMP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x794D00)
#define OCADHCAJMMP_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x358710)
#define OCADHCAJMMP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x16BF4D00)
#define OCADHCAJMMP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x794E20)
#define OCADHCAJMMP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x16BF4940)
#define OCADHCAJMMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x794CF0)
#define OCADHCAJMMP__CTOR_OFFSET UNITYSDK_OFFSET(0x794920)

inline static constexpr unsigned int OCADHCAJMMP_TypeDefinitionIndex = 71038;

struct alignas(4) OCADHCAJMMP
{
	::MoleMole::EntityHandle _FAHNOENJLOK_k__BackingField; // 0x10
	::OBCAIIPOJEO _BGJDOEFKADN_k__BackingField; // 0x20

	::System::Void _ctor(::MoleMole::EntityHandle KECKGDFIALJ, ::OBCAIIPOJEO& IIPPKCOCCJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::OBCAIIPOJEO&))((::PBYTE)hIl2Cpp + OCADHCAJMMP__CTOR_OFFSET))(this, KECKGDFIALJ, IIPPKCOCCJE);
	}

	/*
	::System::Boolean Equals(::OCADHCAJMMP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCADHCAJMMP))((::PBYTE)hIl2Cpp + OCADHCAJMMP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCADHCAJMMP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_TOSTRING_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::OCADHCAJMMP KILPCOMOCMD, ::OCADHCAJMMP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OCADHCAJMMP, ::OCADHCAJMMP))((::PBYTE)hIl2Cpp + OCADHCAJMMP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::OCADHCAJMMP KILPCOMOCMD, ::OCADHCAJMMP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OCADHCAJMMP, ::OCADHCAJMMP))((::PBYTE)hIl2Cpp + OCADHCAJMMP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_DPIHOJBBGLA_OFFSET))(this);
	}

	::OBCAIIPOJEO CBAFNGJMIGB()
	{
		return ((::OBCAIIPOJEO(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_CBAFNGJMIGB_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCADHCAJMMP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::EntityHandle IBNCFMCGHFC()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + OCADHCAJMMP_IBNCFMCGHFC_OFFSET))(this);
	}
};
