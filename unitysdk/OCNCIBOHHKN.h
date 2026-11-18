#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OCNCIBOHHKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1005BBC0)

inline static constexpr unsigned int OCNCIBOHHKN_TypeDefinitionIndex = 73095;

struct alignas(8) OCNCIBOHHKN
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OCNCIBOHHKN_TypeDefinitionIndex)->GetStaticField(0x3CD00);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single GPIOJBLKFAJ; // 0x18
	::System::Int32 HLBKHEFJAPH; // 0x1C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCNCIBOHHKN__CCTOR_OFFSET))();
	}
};
