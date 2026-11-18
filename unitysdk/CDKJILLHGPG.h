#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CDKJILLHGPG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x153233E0)
#define CDKJILLHGPG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15323450)
#define CDKJILLHGPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x153233C0)

inline static constexpr unsigned int CDKJILLHGPG_TypeDefinitionIndex = 73269;

struct alignas(4) CDKJILLHGPG
{
	static ::CDKJILLHGPG* StaticGet_EFMCBKOMKIH()
	{
		return (::CDKJILLHGPG*)Il2CppClass::FromTypeDefinitionIndex(CDKJILLHGPG_TypeDefinitionIndex)->GetStaticField(0xC080);
	}
	::System::Int32 BIOGBPMINKI; // 0x10
	::System::Single DLADDJGPAGA; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDKJILLHGPG__CCTOR_OFFSET))();
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::CDKJILLHGPG FFKBEGIHIGG, ::CDKJILLHGPG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CDKJILLHGPG, ::CDKJILLHGPG))((::PBYTE)hIl2Cpp + CDKJILLHGPG_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::CDKJILLHGPG FFKBEGIHIGG, ::CDKJILLHGPG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CDKJILLHGPG, ::CDKJILLHGPG))((::PBYTE)hIl2Cpp + CDKJILLHGPG_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
