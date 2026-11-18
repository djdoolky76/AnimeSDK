#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DEHFOAMKBOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BAE870)

inline static constexpr unsigned int DEHFOAMKBOL_TypeDefinitionIndex = 54041;

struct alignas(8) DEHFOAMKBOL
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DEHFOAMKBOL_TypeDefinitionIndex)->GetStaticField(0x45E20);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean JDAGKAMAGAK; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHFOAMKBOL__CCTOR_OFFSET))();
	}
};
