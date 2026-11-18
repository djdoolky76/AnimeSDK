#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CJEFEPMHEEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A2DF60)
#define CJEFEPMHEEH__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int CJEFEPMHEEH_TypeDefinitionIndex = 91512;

struct alignas(4) CJEFEPMHEEH
{
	static ::CJEFEPMHEEH* StaticGet_DDGNFJDLOKA()
	{
		return (::CJEFEPMHEEH*)Il2CppClass::FromTypeDefinitionIndex(CJEFEPMHEEH_TypeDefinitionIndex)->GetStaticField(0xFF40);
	}
	::System::Single IDHPCEMJOOG; // 0x10
	::System::Single KBPFFMIPCBF; // 0x14

	::System::Void _ctor(::System::Single IBCAFNKFIDH, ::System::Single DIJADIGAGCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CJEFEPMHEEH__CTOR_OFFSET))(this, IBCAFNKFIDH, DIJADIGAGCA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJEFEPMHEEH__CCTOR_OFFSET))();
	}
};
