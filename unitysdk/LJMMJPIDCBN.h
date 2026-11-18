#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LJMMJPIDCBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x158EF4E0)

inline static constexpr unsigned int LJMMJPIDCBN_TypeDefinitionIndex = 72692;

struct alignas(8) LJMMJPIDCBN
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LJMMJPIDCBN_TypeDefinitionIndex)->GetStaticField(0x315F0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::String* NEJOEEHPFLM; // 0x18
	::System::UInt32 OMEKLHOFFEM; // 0x20
	::System::Boolean INCBEJKAODA; // 0x24
	::System::Byte _padding0[0x3];
	::MoleMole::Config::InputType NAEOKDGHOFP; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMMJPIDCBN__CCTOR_OFFSET))();
	}
};
