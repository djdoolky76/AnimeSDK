#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EEOEIGABBCG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x744CF0)
#define EEOEIGABBCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x744BB0)
#define EEOEIGABBCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x744B50)
#define EEOEIGABBCG_FHLJBKHEPFE_OFFSET UNITYSDK_OFFSET(0x744C20)
#define EEOEIGABBCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x744BC0)
#define EEOEIGABBCG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x744C90)
#define EEOEIGABBCG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x14A87030)
#define EEOEIGABBCG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x744D70)
#define EEOEIGABBCG_MBNBBKJHICE_OFFSET UNITYSDK_OFFSET(0x744C30)
#define EEOEIGABBCG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14A87110)
#define EEOEIGABBCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x744C10)
#define EEOEIGABBCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A86E60)
#define EEOEIGABBCG__CTOR_OFFSET UNITYSDK_OFFSET(0x744B40)

inline static constexpr unsigned int EEOEIGABBCG_TypeDefinitionIndex = 61599;

struct alignas(4) EEOEIGABBCG
{
	static ::EEOEIGABBCG* StaticGet_CGICCOBHACH()
	{
		return (::EEOEIGABBCG*)Il2CppClass::FromTypeDefinitionIndex(EEOEIGABBCG_TypeDefinitionIndex)->GetStaticField(0xEEF0);
	}
	::System::Int32 KHLGLLEFGKI; // 0x10
	::System::UInt32 ONKACNLPGME; // 0x14

	::System::Void _ctor(::System::Int32 LCHGINFEKCG, ::System::UInt32 BDAJIGIOAMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EEOEIGABBCG__CTOR_OFFSET))(this, LCHGINFEKCG, BDAJIGIOAMM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEOEIGABBCG__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::EEOEIGABBCG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EEOEIGABBCG))((::PBYTE)hIl2Cpp + EEOEIGABBCG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEOEIGABBCG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEIGABBCG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEIGABBCG_TOSTRING_OFFSET))(this);
	}

	::System::Boolean FHLJBKHEPFE(::System::Int32 LCHGINFEKCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEOEIGABBCG_FHLJBKHEPFE_OFFSET))(this, LCHGINFEKCG);
	}

	::System::Boolean MBNBBKJHICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEIGABBCG_MBNBBKJHICE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEIGABBCG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEIGABBCG_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::EEOEIGABBCG KILPCOMOCMD, ::EEOEIGABBCG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EEOEIGABBCG, ::EEOEIGABBCG))((::PBYTE)hIl2Cpp + EEOEIGABBCG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEOEIGABBCG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::EEOEIGABBCG KILPCOMOCMD, ::EEOEIGABBCG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EEOEIGABBCG, ::EEOEIGABBCG))((::PBYTE)hIl2Cpp + EEOEIGABBCG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
