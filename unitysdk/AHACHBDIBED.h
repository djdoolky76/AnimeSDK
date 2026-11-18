#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PBDFNCLAOLG;
namespace System { class Object; }

#define AHACHBDIBED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79D760)
#define AHACHBDIBED_EQUALS_OFFSET UNITYSDK_OFFSET(0x79D700)
#define AHACHBDIBED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79D770)
#define AHACHBDIBED_GMKJPEEKJAJ_OFFSET UNITYSDK_OFFSET(0x79D830)
#define AHACHBDIBED_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x79D880)
#define AHACHBDIBED_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x16D7A2A0)
#define AHACHBDIBED_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x79D7D0)
#define AHACHBDIBED_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x16D7A1F0)
#define AHACHBDIBED_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x16D7A430)
#define AHACHBDIBED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x79D6D0)
#define AHACHBDIBED__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int AHACHBDIBED_TypeDefinitionIndex = 51618;

struct alignas(4) AHACHBDIBED
{
	::System::UInt32 MHEPHJLGIJA; // 0x10
	::System::UInt32 FMNEFJKJGPB; // 0x14

	::System::Void _ctor(::System::UInt32 JFDKIGGPONC, ::System::UInt32 LIKBIMNLKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AHACHBDIBED__CTOR_OFFSET))(this, JFDKIGGPONC, LIKBIMNLKBC);
	}

	::System::Void _ctor_1(::PBDFNCLAOLG* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::PBDFNCLAOLG*))((::PBYTE)hIl2Cpp + AHACHBDIBED__CTOR_1_OFFSET))(this, MCOHLHMKLIP);
	}

	/*
	::System::Boolean Equals(::AHACHBDIBED LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AHACHBDIBED))((::PBYTE)hIl2Cpp + AHACHBDIBED_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHACHBDIBED_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACHBDIBED_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::AHACHBDIBED KILPCOMOCMD, ::AHACHBDIBED BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::AHACHBDIBED, ::AHACHBDIBED))((::PBYTE)hIl2Cpp + AHACHBDIBED_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHACHBDIBED_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GMKJPEEKJAJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACHBDIBED_GMKJPEEKJAJ_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACHBDIBED_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::AHACHBDIBED KILPCOMOCMD, ::AHACHBDIBED BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::AHACHBDIBED, ::AHACHBDIBED))((::PBYTE)hIl2Cpp + AHACHBDIBED_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::AHACHBDIBED PPGBHNIJOIB()
	{
		return ((::AHACHBDIBED(*)())((::PBYTE)hIl2Cpp + AHACHBDIBED_PPGBHNIJOIB_OFFSET))();
	}
	*/
};
