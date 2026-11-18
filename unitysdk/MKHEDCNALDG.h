#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MKHEDCNALDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D45FE0)

inline static constexpr unsigned int MKHEDCNALDG_TypeDefinitionIndex = 61511;

struct alignas(8) MKHEDCNALDG
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MKHEDCNALDG_TypeDefinitionIndex)->GetStaticField(0x37440);
	}
	::System::Int32 FINLNNHFCMB; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* KIHGNGKBADE; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKHEDCNALDG__CCTOR_OFFSET))();
	}
};
