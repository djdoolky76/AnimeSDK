#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define AJBPFKHFACN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x728100)
#define AJBPFKHFACN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x728200)
#define AJBPFKHFACN_EQUALS_OFFSET UNITYSDK_OFFSET(0x728190)
#define AJBPFKHFACN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x728210)
#define AJBPFKHFACN_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7282E0)
#define AJBPFKHFACN_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x143B0870)
#define AJBPFKHFACN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x728270)
#define AJBPFKHFACN_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x143B0750)
#define AJBPFKHFACN__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B06E0)

inline static constexpr unsigned int AJBPFKHFACN_TypeDefinitionIndex = 44023;

struct alignas(4) AJBPFKHFACN
{
	static ::AJBPFKHFACN* StaticGet_FDJHEBHLJLD()
	{
		return (::AJBPFKHFACN*)Il2CppClass::FromTypeDefinitionIndex(AJBPFKHFACN_TypeDefinitionIndex)->GetStaticField(0x104D0);
	}
	::System::Int64 NBONLJKBDIF; // 0x10
	::System::UInt32 IACFCGBOCKM; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJBPFKHFACN__CCTOR_OFFSET))();
	}

	/*
	::System::Int32 CompareTo(::AJBPFKHFACN LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::AJBPFKHFACN))((::PBYTE)hIl2Cpp + AJBPFKHFACN_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean Equals(::AJBPFKHFACN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJBPFKHFACN))((::PBYTE)hIl2Cpp + AJBPFKHFACN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJBPFKHFACN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBPFKHFACN_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJBPFKHFACN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::AJBPFKHFACN KILPCOMOCMD, ::AJBPFKHFACN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::AJBPFKHFACN, ::AJBPFKHFACN))((::PBYTE)hIl2Cpp + AJBPFKHFACN_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBPFKHFACN_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::AJBPFKHFACN KILPCOMOCMD, ::AJBPFKHFACN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::AJBPFKHFACN, ::AJBPFKHFACN))((::PBYTE)hIl2Cpp + AJBPFKHFACN_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
