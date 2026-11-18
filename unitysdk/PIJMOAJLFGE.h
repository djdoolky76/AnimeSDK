#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIJMOAJLFGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x750490)
#define PIJMOAJLFGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7504F0)
#define PIJMOAJLFGE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7505F0)
#define PIJMOAJLFGE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x150CD9B0)
#define PIJMOAJLFGE_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7505A0)
#define PIJMOAJLFGE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x150CD920)
#define PIJMOAJLFGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x150CD910)
#define PIJMOAJLFGE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int PIJMOAJLFGE_TypeDefinitionIndex = 83590;

struct alignas(4) PIJMOAJLFGE
{
	static ::PIJMOAJLFGE* StaticGet_EFMCBKOMKIH()
	{
		return (::PIJMOAJLFGE*)Il2CppClass::FromTypeDefinitionIndex(PIJMOAJLFGE_TypeDefinitionIndex)->GetStaticField(0x13050);
	}
	::System::Int32 BELNJJKMMJP; // 0x10
	::System::Int32 FEAAKLJIAFE; // 0x14

	::System::Void _ctor(::System::Int32 ABHBKFJKINO, ::System::Int32 IEGPOKIFOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIJMOAJLFGE__CTOR_OFFSET))(this, ABHBKFJKINO, IEGPOKIFOIO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJMOAJLFGE__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::PIJMOAJLFGE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::PIJMOAJLFGE FFKBEGIHIGG, ::PIJMOAJLFGE CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::PIJMOAJLFGE, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::PIJMOAJLFGE FFKBEGIHIGG, ::PIJMOAJLFGE CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::PIJMOAJLFGE, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJMOAJLFGE_HLPHPBAODIF_OFFSET))(this);
	}
};
