#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FAFHFHADDIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F522F0)

inline static constexpr unsigned int FAFHFHADDIC_TypeDefinitionIndex = 50618;

struct alignas(8) FAFHFHADDIC
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FAFHFHADDIC_TypeDefinitionIndex)->GetStaticField(0x3DB10);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single CKHHBDEAMJJ; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFHFHADDIC__CCTOR_OFFSET))();
	}
};
