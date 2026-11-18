#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLBEDJOGKEC_ALNIGOEDNFC_OFFSET UNITYSDK_OFFSET(0x1E1B8DE0)
#define CLBEDJOGKEC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x8E3B30)
#define CLBEDJOGKEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8E3A70)
#define CLBEDJOGKEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E3A20)
#define CLBEDJOGKEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8E3A80)
#define CLBEDJOGKEC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8E3BB0)
#define CLBEDJOGKEC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1E1B8F70)
#define CLBEDJOGKEC_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x1E1B8FF0)
#define CLBEDJOGKEC_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define CLBEDJOGKEC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8E3C10)
#define CLBEDJOGKEC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1E1B8E80)
#define CLBEDJOGKEC_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x359320)
#define CLBEDJOGKEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8E3AD0)
#define CLBEDJOGKEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8D40)
#define CLBEDJOGKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int CLBEDJOGKEC_TypeDefinitionIndex = 93956;

struct alignas(4) CLBEDJOGKEC
{
	static ::CLBEDJOGKEC* StaticGet_EFMCBKOMKIH()
	{
		return (::CLBEDJOGKEC*)Il2CppClass::FromTypeDefinitionIndex(CLBEDJOGKEC_TypeDefinitionIndex)->GetStaticField(0x13D60);
	}
	::System::UInt32 HHGILNNMNAK; // 0x10

	::System::Void _ctor(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLBEDJOGKEC__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLBEDJOGKEC__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::CLBEDJOGKEC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLBEDJOGKEC))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::CLBEDJOGKEC ALNIGOEDNFC(::System::UInt32 FHLDAJFKJGN)
	{
		return ((::CLBEDJOGKEC(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_ALNIGOEDNFC_OFFSET))(FHLDAJFKJGN);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::CLBEDJOGKEC KILPCOMOCMD, ::CLBEDJOGKEC BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::CLBEDJOGKEC, ::CLBEDJOGKEC))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::UInt32 PEOEBEBFIJO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_PEOEBEBFIJO_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::CLBEDJOGKEC KILPCOMOCMD, ::CLBEDJOGKEC BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::CLBEDJOGKEC, ::CLBEDJOGKEC))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::UInt32 JCIODAGLLGB(::CLBEDJOGKEC PHHDHIBOCKA)
	{
		return ((::System::UInt32(*)(::CLBEDJOGKEC))((::PBYTE)hIl2Cpp + CLBEDJOGKEC_JCIODAGLLGB_OFFSET))(PHHDHIBOCKA);
	}
	*/
};
