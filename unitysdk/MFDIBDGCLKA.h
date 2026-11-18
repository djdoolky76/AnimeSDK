#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MFDIBDGCLKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7956B0)
#define MFDIBDGCLKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x795630)
#define MFDIBDGCLKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7956C0)
#define MFDIBDGCLKA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x795720)
#define MFDIBDGCLKA_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x16C7A530)
#define MFDIBDGCLKA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x795790)
#define MFDIBDGCLKA_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x16C7A610)
#define MFDIBDGCLKA__CTOR_OFFSET UNITYSDK_OFFSET(0x795620)

inline static constexpr unsigned int MFDIBDGCLKA_TypeDefinitionIndex = 88300;

struct alignas(4) MFDIBDGCLKA
{
	::System::Int32 ABKIIACOJCD; // 0x10
	::System::UInt16 DOHHMABDGPE; // 0x14
	::System::Byte _padding0[0x2];
	::System::UInt32 FEAAKLJIAFE; // 0x18

	::System::Void _ctor(::System::Int32 OCJFCOGGMAB, ::System::UInt16 GCFDHEFHCAJ, ::System::UInt32 IEGPOKIFOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt16, ::System::UInt32))((::PBYTE)hIl2Cpp + MFDIBDGCLKA__CTOR_OFFSET))(this, OCJFCOGGMAB, GCFDHEFHCAJ, IEGPOKIFOIO);
	}

	/*
	::System::Boolean Equals(::MFDIBDGCLKA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MFDIBDGCLKA))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::MFDIBDGCLKA KILPCOMOCMD, ::MFDIBDGCLKA BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::MFDIBDGCLKA, ::MFDIBDGCLKA))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::MFDIBDGCLKA KILPCOMOCMD, ::MFDIBDGCLKA BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::MFDIBDGCLKA, ::MFDIBDGCLKA))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDIBDGCLKA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
