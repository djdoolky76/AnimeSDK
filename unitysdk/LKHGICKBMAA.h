#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LKHGICKBMAA_JGNKGBBGOJN_OFFSET UNITYSDK_OFFSET(0x13CF9020)
#define LKHGICKBMAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CF9010)
#define LKHGICKBMAA__CTOR_OFFSET UNITYSDK_OFFSET(0x720160)

inline static constexpr unsigned int LKHGICKBMAA_TypeDefinitionIndex = 48294;

struct alignas(4) LKHGICKBMAA
{
	static ::System::Int32* StaticGet_FAPHACPNAKE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LKHGICKBMAA_TypeDefinitionIndex)->GetStaticField(0x114A0);
	}
	::System::Single AKMPEDEFMLL; // 0x10
	::System::Int32 PMPLFJHDHEG; // 0x14
	::System::Boolean MJIMNNFEKNB; // 0x18

	::System::Void _ctor(::System::Single DBGAPPIIFOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKHGICKBMAA__CTOR_OFFSET))(this, DBGAPPIIFOH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHGICKBMAA__CCTOR_OFFSET))();
	}

	/*
	static ::LKHGICKBMAA JGNKGBBGOJN()
	{
		return ((::LKHGICKBMAA(*)())((::PBYTE)hIl2Cpp + LKHGICKBMAA_JGNKGBBGOJN_OFFSET))();
	}
	*/
};
