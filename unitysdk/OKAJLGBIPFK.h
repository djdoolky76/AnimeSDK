#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OKAJLGBIPFK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1844B100)

inline static constexpr unsigned int OKAJLGBIPFK_TypeDefinitionIndex = 54694;

struct alignas(8) OKAJLGBIPFK
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OKAJLGBIPFK_TypeDefinitionIndex)->GetStaticField(0x37400);
	}
	::System::String* KIHGNGKBADE; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAJLGBIPFK__CCTOR_OFFSET))();
	}
};
