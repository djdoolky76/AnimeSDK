#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define LNEPKEJAAMC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x85EBF0)
#define LNEPKEJAAMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x85EB80)
#define LNEPKEJAAMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x85EB20)
#define LNEPKEJAAMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85EB90)
#define LNEPKEJAAMC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x85ECD0)
#define LNEPKEJAAMC_IHOHALHHAED_OFFSET UNITYSDK_OFFSET(0x85ED30)
#define LNEPKEJAAMC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1CDE1EA0)
#define LNEPKEJAAMC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x85EC70)
#define LNEPKEJAAMC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1CDE1E00)
#define LNEPKEJAAMC_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x790810)
#define LNEPKEJAAMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x85EBE0)
#define LNEPKEJAAMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1CB0)
#define LNEPKEJAAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEE90)

inline static constexpr unsigned int LNEPKEJAAMC_TypeDefinitionIndex = 28887;

struct alignas(4) LNEPKEJAAMC
{
	static ::LNEPKEJAAMC* StaticGet_FDJHEBHLJLD()
	{
		return (::LNEPKEJAAMC*)Il2CppClass::FromTypeDefinitionIndex(LNEPKEJAAMC_TypeDefinitionIndex)->GetStaticField(0x14290);
	}
	::System::UInt16 EDEFLFIKNFK; // 0x10
	::System::UInt16 AMCDAOJKFNF; // 0x12

	::System::Void _ctor(::System::UInt16 GIAEPMKCBIB, ::System::UInt16 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + LNEPKEJAAMC__CTOR_OFFSET))(this, GIAEPMKCBIB, JHFKDGBCOBA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEPKEJAAMC__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::LNEPKEJAAMC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LNEPKEJAAMC))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LNEPKEJAAMC EJCBEJMGFAJ, ::LNEPKEJAAMC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::LNEPKEJAAMC, ::LNEPKEJAAMC))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Int32 IHOHALHHAED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_IHOHALHHAED_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::LNEPKEJAAMC EJCBEJMGFAJ, ::LNEPKEJAAMC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::LNEPKEJAAMC, ::LNEPKEJAAMC))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPKEJAAMC_OAJEIDFGCII_OFFSET))(this);
	}
};
