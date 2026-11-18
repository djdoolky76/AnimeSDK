#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HFEKGJBOPNE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x7714E0)
#define HFEKGJBOPNE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x771660)
#define HFEKGJBOPNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x771480)
#define HFEKGJBOPNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x771430)
#define HFEKGJBOPNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x771490)
#define HFEKGJBOPNE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7715A0)
#define HFEKGJBOPNE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x15B45900)
#define HFEKGJBOPNE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x771600)
#define HFEKGJBOPNE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15B45A10)
#define HFEKGJBOPNE_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x5E6980)
#define HFEKGJBOPNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x771540)
#define HFEKGJBOPNE__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int HFEKGJBOPNE_TypeDefinitionIndex = 50197;

struct alignas(4) HFEKGJBOPNE
{
	::System::UInt32 GPIOJBLKFAJ; // 0x10

	::System::Void _ctor(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFEKGJBOPNE__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	::System::Boolean Equals(::HFEKGJBOPNE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFEKGJBOPNE))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Int32 CompareTo(::HFEKGJBOPNE LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::HFEKGJBOPNE))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HFEKGJBOPNE KILPCOMOCMD, ::HFEKGJBOPNE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HFEKGJBOPNE, ::HFEKGJBOPNE))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_OAJEIDFGCII_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HFEKGJBOPNE KILPCOMOCMD, ::HFEKGJBOPNE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HFEKGJBOPNE, ::HFEKGJBOPNE))((::PBYTE)hIl2Cpp + HFEKGJBOPNE_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
