#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MFPOMKPCBPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D7A0C0)

inline static constexpr unsigned int MFPOMKPCBPE_TypeDefinitionIndex = 49241;

struct alignas(8) MFPOMKPCBPE
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MFPOMKPCBPE_TypeDefinitionIndex)->GetStaticField(0x49610);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Int32 KLCPONCIFJM; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFPOMKPCBPE__CCTOR_OFFSET))();
	}
};
