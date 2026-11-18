#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Vector2Int.h"

namespace System { class Object; }
namespace System { class String; }

#define LJIBNLBCGFG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x749A70)
#define LJIBNLBCGFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x749A10)
#define LJIBNLBCGFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7499B0)
#define LJIBNLBCGFG_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x749AF0)
#define LJIBNLBCGFG_FJNFHMNLJHI_OFFSET UNITYSDK_OFFSET(0x749BE0)
#define LJIBNLBCGFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x749A20)
#define LJIBNLBCGFG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x749B80)
#define LJIBNLBCGFG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x14DB8080)
#define LJIBNLBCGFG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x749BF0)
#define LJIBNLBCGFG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14DB80D0)
#define LJIBNLBCGFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7499A0)
#define LJIBNLBCGFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DB7C40)
#define LJIBNLBCGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x749930)

inline static constexpr unsigned int LJIBNLBCGFG_TypeDefinitionIndex = 45346;

struct alignas(4) LJIBNLBCGFG
{
	static ::System::UInt32* StaticGet_FEODNAGOFEH()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LJIBNLBCGFG_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::LJIBNLBCGFG* StaticGet_GNEJOILMPBP()
	{
		return (::LJIBNLBCGFG*)Il2CppClass::FromTypeDefinitionIndex(LJIBNLBCGFG_TypeDefinitionIndex)->GetStaticField(0xE9C4);
	}
	::System::UInt32 JLDCMIFJBBJ; // 0x10
	::System::UInt32 CMKEBCGHEJD; // 0x14

	::System::Void _ctor(::System::UInt32 LPALEBPKMNO, ::System::Boolean GCBEHCPPLCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + LJIBNLBCGFG__CTOR_OFFSET))(this, LPALEBPKMNO, GCBEHCPPLCL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJIBNLBCGFG__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::LJIBNLBCGFG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_HLPHPBAODIF_OFFSET))(this);
	}

	::MoleMole::Vector2Int FJNFHMNLJHI()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_FJNFHMNLJHI_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::LJIBNLBCGFG FFKBEGIHIGG, ::LJIBNLBCGFG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::LJIBNLBCGFG, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::LJIBNLBCGFG FFKBEGIHIGG, ::LJIBNLBCGFG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::LJIBNLBCGFG, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + LJIBNLBCGFG_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
