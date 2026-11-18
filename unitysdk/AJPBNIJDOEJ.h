#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AJPBNIJDOEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D8BB40)

inline static constexpr unsigned int AJPBNIJDOEJ_TypeDefinitionIndex = 61470;

struct alignas(8) AJPBNIJDOEJ
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AJPBNIJDOEJ_TypeDefinitionIndex)->GetStaticField(0x457C0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean PEDANHBGIGE; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJPBNIJDOEJ__CCTOR_OFFSET))();
	}
};
