#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NNKEPLAFLGN_ALNIGOEDNFC_OFFSET UNITYSDK_OFFSET(0x1E1D4B60)
#define NNKEPLAFLGN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x8E3ED0)
#define NNKEPLAFLGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8E3D50)
#define NNKEPLAFLGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E3D00)
#define NNKEPLAFLGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8E3D60)
#define NNKEPLAFLGN_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8E3E10)
#define NNKEPLAFLGN_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1E1D4C50)
#define NNKEPLAFLGN_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x1E1D4BB0)
#define NNKEPLAFLGN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x718D80)
#define NNKEPLAFLGN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8E3E70)
#define NNKEPLAFLGN_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1E1D4AE0)
#define NNKEPLAFLGN_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x359320)
#define NNKEPLAFLGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8E3DB0)
#define NNKEPLAFLGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4AD0)
#define NNKEPLAFLGN__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int NNKEPLAFLGN_TypeDefinitionIndex = 93998;

struct alignas(4) NNKEPLAFLGN
{
	static ::NNKEPLAFLGN* StaticGet_EFMCBKOMKIH()
	{
		return (::NNKEPLAFLGN*)Il2CppClass::FromTypeDefinitionIndex(NNKEPLAFLGN_TypeDefinitionIndex)->GetStaticField(0x13DB0);
	}
	// static const ::System::Int32 NNMKONHNIOE = -0x1; // 0x0
	::System::Int32 HHGILNNMNAK; // 0x10

	::System::Void _ctor(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNKEPLAFLGN__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKEPLAFLGN__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::NNKEPLAFLGN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNKEPLAFLGN))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_TOSTRING_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::NNKEPLAFLGN KILPCOMOCMD, ::NNKEPLAFLGN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NNKEPLAFLGN, ::NNKEPLAFLGN))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::NNKEPLAFLGN ALNIGOEDNFC(::System::Int32 FHLDAJFKJGN)
	{
		return ((::NNKEPLAFLGN(*)(::System::Int32))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_ALNIGOEDNFC_OFFSET))(FHLDAJFKJGN);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_JDAPDDEOCEA_OFFSET))(this);
	}

	/*
	static ::System::Int32 JCIODAGLLGB(::NNKEPLAFLGN PHHDHIBOCKA)
	{
		return ((::System::Int32(*)(::NNKEPLAFLGN))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_JCIODAGLLGB_OFFSET))(PHHDHIBOCKA);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::NNKEPLAFLGN KILPCOMOCMD, ::NNKEPLAFLGN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NNKEPLAFLGN, ::NNKEPLAFLGN))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKEPLAFLGN_DPIHOJBBGLA_OFFSET))(this);
	}
};
