#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LOCFBJHPDND__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DCC230)

inline static constexpr unsigned int LOCFBJHPDND_TypeDefinitionIndex = 79651;

struct alignas(8) LOCFBJHPDND
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LOCFBJHPDND_TypeDefinitionIndex)->GetStaticField(0x4F2C0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean JDAGKAMAGAK; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOCFBJHPDND__CCTOR_OFFSET))();
	}
};
