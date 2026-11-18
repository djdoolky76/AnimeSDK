#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOPPLKDFLPK.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define GJMHKPFBNIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B0C80)
#define GJMHKPFBNIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B0C30)
#define GJMHKPFBNIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B0C90)
#define GJMHKPFBNIG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7B0D40)
#define GJMHKPFBNIG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x17A0DF40)
#define GJMHKPFBNIG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7B0CE0)
#define GJMHKPFBNIG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x17A0E080)
#define GJMHKPFBNIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A0DF00)
#define GJMHKPFBNIG__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0BC0)

inline static constexpr unsigned int GJMHKPFBNIG_TypeDefinitionIndex = 41276;

struct alignas(4) GJMHKPFBNIG
{
	static ::GJMHKPFBNIG* StaticGet_CABOHALIHCH()
	{
		return (::GJMHKPFBNIG*)Il2CppClass::FromTypeDefinitionIndex(GJMHKPFBNIG_TypeDefinitionIndex)->GetStaticField(0x12AF0);
	}
	static ::GJMHKPFBNIG* StaticGet_HIEHIBAAOLC()
	{
		return (::GJMHKPFBNIG*)Il2CppClass::FromTypeDefinitionIndex(GJMHKPFBNIG_TypeDefinitionIndex)->GetStaticField(0x12AF1);
	}
	static ::GJMHKPFBNIG* StaticGet_HICEJEACBGD()
	{
		return (::GJMHKPFBNIG*)Il2CppClass::FromTypeDefinitionIndex(GJMHKPFBNIG_TypeDefinitionIndex)->GetStaticField(0x12AF2);
	}
	::IOPPLKDFLPK AAEDPMHMDIK; // 0x10

	::System::Void _ctor(::IOPPLKDFLPK MIDGBLDKHMI)
	{
		return ((::System::Void(*)(::PVOID, ::IOPPLKDFLPK))((::PBYTE)hIl2Cpp + GJMHKPFBNIG__CTOR_OFFSET))(this, MIDGBLDKHMI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJMHKPFBNIG__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::GJMHKPFBNIG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GJMHKPFBNIG))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::GJMHKPFBNIG KILPCOMOCMD, ::GJMHKPFBNIG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::GJMHKPFBNIG, ::GJMHKPFBNIG))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::GJMHKPFBNIG KILPCOMOCMD, ::GJMHKPFBNIG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::GJMHKPFBNIG, ::GJMHKPFBNIG))((::PBYTE)hIl2Cpp + GJMHKPFBNIG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
