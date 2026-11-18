#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PHANJBIMKLA;
namespace System { class Object; }
namespace System { class String; }

#define FNKOPDEKLKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x75FE00)
#define FNKOPDEKLKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x75FDE0)
#define FNKOPDEKLKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75FD90)
#define FNKOPDEKLKG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x75FE10)
#define FNKOPDEKLKG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x156CD520)
#define FNKOPDEKLKG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x75FE90)
#define FNKOPDEKLKG_KLPKAPADKOG_OFFSET UNITYSDK_OFFSET(0x75FF00)
#define FNKOPDEKLKG_KPBOACMBLIJ_OFFSET UNITYSDK_OFFSET(0x75FE80)
#define FNKOPDEKLKG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x156CD450)
#define FNKOPDEKLKG__CTOR_OFFSET UNITYSDK_OFFSET(0x75FDF0)

inline static constexpr unsigned int FNKOPDEKLKG_TypeDefinitionIndex = 40298;

struct alignas(8) FNKOPDEKLKG
{
	::PHANJBIMKLA* FEFFFPGCIIO; // 0x10
	::System::String* HFEIPMCNCNI; // 0x18
	::System::UInt32 JMKIJIAGMJJ; // 0x20

	::System::Void _ctor(::PHANJBIMKLA* AMNIHACKELI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::PHANJBIMKLA*, ::System::String*))((::PBYTE)hIl2Cpp + FNKOPDEKLKG__CTOR_OFFSET))(this, AMNIHACKELI, AELLPLBJELA);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_DISPOSE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::FNKOPDEKLKG EJCBEJMGFAJ, ::FNKOPDEKLKG EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FNKOPDEKLKG, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Void KPBOACMBLIJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_KPBOACMBLIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::FNKOPDEKLKG EJCBEJMGFAJ, ::FNKOPDEKLKG EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FNKOPDEKLKG, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean KLPKAPADKOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKOPDEKLKG_KLPKAPADKOG_OFFSET))(this);
	}
};
