#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FIAJBFIOBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x191C3C00)

inline static constexpr unsigned int FIAJBFIOBFD_TypeDefinitionIndex = 57518;

struct alignas(8) FIAJBFIOBFD
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FIAJBFIOBFD_TypeDefinitionIndex)->GetStaticField(0x495E0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean JDAGKAMAGAK; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIAJBFIOBFD__CCTOR_OFFSET))();
	}
};
