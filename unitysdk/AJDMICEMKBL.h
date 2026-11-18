#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define AJDMICEMKBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x707D20)
#define AJDMICEMKBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x707D00)
#define AJDMICEMKBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x707E10)
#define AJDMICEMKBL_GPOAHFFGGIL_OFFSET UNITYSDK_OFFSET(0x707F30)
#define AJDMICEMKBL_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x707ED0)
#define AJDMICEMKBL_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x135EB6E0)
#define AJDMICEMKBL_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x707E60)
#define AJDMICEMKBL_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x135EB940)
#define AJDMICEMKBL__CCTOR_OFFSET UNITYSDK_OFFSET(0x135EB830)
#define AJDMICEMKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int AJDMICEMKBL_TypeDefinitionIndex = 68902;

struct alignas(8) AJDMICEMKBL
{
	static ::AJDMICEMKBL* StaticGet_DDGNFJDLOKA()
	{
		return (::AJDMICEMKBL*)Il2CppClass::FromTypeDefinitionIndex(AJDMICEMKBL_TypeDefinitionIndex)->GetStaticField(0x44810);
	}
	::System::UInt32 GAONLCCFBBN; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::String*>* ILCLDLJDIAM; // 0x18

	::System::Void _ctor(::System::UInt32 KEGGKEDLLEK, ::Il2CppArray<::System::String*>* GJNGNBPICHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AJDMICEMKBL__CTOR_OFFSET))(this, KEGGKEDLLEK, GJNGNBPICHP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDMICEMKBL__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::AJDMICEMKBL LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJDMICEMKBL))((::PBYTE)hIl2Cpp + AJDMICEMKBL_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDMICEMKBL_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDMICEMKBL_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDMICEMKBL_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDMICEMKBL_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::AJDMICEMKBL FFKBEGIHIGG, ::AJDMICEMKBL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::AJDMICEMKBL, ::AJDMICEMKBL))((::PBYTE)hIl2Cpp + AJDMICEMKBL_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::String* GPOAHFFGGIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDMICEMKBL_GPOAHFFGGIL_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::AJDMICEMKBL FFKBEGIHIGG, ::AJDMICEMKBL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::AJDMICEMKBL, ::AJDMICEMKBL))((::PBYTE)hIl2Cpp + AJDMICEMKBL_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
