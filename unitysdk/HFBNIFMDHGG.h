#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HFBNIFMDHGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B44850)

inline static constexpr unsigned int HFBNIFMDHGG_TypeDefinitionIndex = 68878;

struct alignas(8) HFBNIFMDHGG
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HFBNIFMDHGG_TypeDefinitionIndex)->GetStaticField(0x48000);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean FFCKJAPNKON; // 0x18
	::System::Boolean PDGKKPKPFOC; // 0x19

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFBNIFMDHGG__CCTOR_OFFSET))();
	}
};
