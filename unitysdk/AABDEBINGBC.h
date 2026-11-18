#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFFNPLCLCMG.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AABDEBINGBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DB87A0)

inline static constexpr unsigned int AABDEBINGBC_TypeDefinitionIndex = 88690;

struct alignas(8) AABDEBINGBC
{
	static ::AABDEBINGBC* StaticGet_EGPPJOMEJNG()
	{
		return (::AABDEBINGBC*)Il2CppClass::FromTypeDefinitionIndex(AABDEBINGBC_TypeDefinitionIndex)->GetStaticField(0x4DFC0);
	}
	::BFFNPLCLCMG OBNIAHNMHPF; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* NAPFALLANDL; // 0x18
	::System::Single JKGFPAKGDDO; // 0x20
	::System::Single EPPCCEEAHLN; // 0x24
	::System::Int32 KKGGACLGGPN; // 0x28
	::System::Int32 EBCCOHJIMOK; // 0x2C
	::System::Int32 BABIHDEGHAB; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABDEBINGBC__CCTOR_OFFSET))();
	}
};
