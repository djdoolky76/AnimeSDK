#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNPMCIAOJPL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CENFGBINCLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16865C40)

inline static constexpr unsigned int CENFGBINCLI_TypeDefinitionIndex = 75671;

struct alignas(8) CENFGBINCLI
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CENFGBINCLI_TypeDefinitionIndex)->GetStaticField(0x4BE60);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::KNPMCIAOJPL IOPFNJFKHHL; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENFGBINCLI__CCTOR_OFFSET))();
	}
};
