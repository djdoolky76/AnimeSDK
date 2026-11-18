#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IODFHIILJDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x804730)
#define IODFHIILJDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x804790)
#define IODFHIILJDG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x804890)
#define IODFHIILJDG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1ACC2790)
#define IODFHIILJDG_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x804840)
#define IODFHIILJDG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1ACC2810)
#define IODFHIILJDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC2780)
#define IODFHIILJDG__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int IODFHIILJDG_TypeDefinitionIndex = 86968;

struct alignas(4) IODFHIILJDG
{
	static ::IODFHIILJDG* StaticGet_EFMCBKOMKIH()
	{
		return (::IODFHIILJDG*)Il2CppClass::FromTypeDefinitionIndex(IODFHIILJDG_TypeDefinitionIndex)->GetStaticField(0xCC20);
	}
	::System::Int32 BELNJJKMMJP; // 0x10
	::System::Int32 FEAAKLJIAFE; // 0x14

	::System::Void _ctor(::System::Int32 ABHBKFJKINO, ::System::Int32 IEGPOKIFOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IODFHIILJDG__CTOR_OFFSET))(this, ABHBKFJKINO, IEGPOKIFOIO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODFHIILJDG__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::IODFHIILJDG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG))((::PBYTE)hIl2Cpp + IODFHIILJDG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODFHIILJDG_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::IODFHIILJDG FFKBEGIHIGG, ::IODFHIILJDG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::IODFHIILJDG, ::IODFHIILJDG))((::PBYTE)hIl2Cpp + IODFHIILJDG_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::IODFHIILJDG FFKBEGIHIGG, ::IODFHIILJDG CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::IODFHIILJDG, ::IODFHIILJDG))((::PBYTE)hIl2Cpp + IODFHIILJDG_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IODFHIILJDG_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODFHIILJDG_HLPHPBAODIF_OFFSET))(this);
	}
};
