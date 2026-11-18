#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AKFGBMGEBDM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CDC4C0)

inline static constexpr unsigned int AKFGBMGEBDM_TypeDefinitionIndex = 69906;

struct alignas(8) AKFGBMGEBDM
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AKFGBMGEBDM_TypeDefinitionIndex)->GetStaticField(0x3A2B0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Int32 GOMOCBAJBEM; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFGBMGEBDM__CCTOR_OFFSET))();
	}
};
