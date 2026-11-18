#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ANHIBJNGOIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853E5D0)

inline static constexpr unsigned int ANHIBJNGOIM_TypeDefinitionIndex = 39134;

struct alignas(8) ANHIBJNGOIM
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ANHIBJNGOIM_TypeDefinitionIndex)->GetStaticField(0x36BF0);
	}
	::System::String* KIHGNGKBADE; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHIBJNGOIM__CCTOR_OFFSET))();
	}
};
