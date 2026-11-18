#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NJLIHDOKOFH__CCTOR_OFFSET UNITYSDK_OFFSET(0xE760DB0)

inline static constexpr unsigned int NJLIHDOKOFH_TypeDefinitionIndex = 77146;

struct alignas(8) NJLIHDOKOFH
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NJLIHDOKOFH_TypeDefinitionIndex)->GetStaticField(0x3F600);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::MoleMole::Config::InlevelCameraState HCLBNLIKGDP; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJLIHDOKOFH__CCTOR_OFFSET))();
	}
};
