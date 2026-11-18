#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CFFAFIKEAAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E350F0)
#define CFFAFIKEAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x653280)

inline static constexpr unsigned int CFFAFIKEAAE_TypeDefinitionIndex = 59216;

struct alignas(8) CFFAFIKEAAE
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CFFAFIKEAAE_TypeDefinitionIndex)->GetStaticField(0x37450);
	}
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CFFAFIKEAAE_TypeDefinitionIndex)->GetStaticField(0xC880);
	}
	::MGHNAPKHBOG MONJKKNAIMP; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x28
	::System::Byte _padding0[0x4];
	::System::String* KIHGNGKBADE; // 0x30
	::System::UInt32 JPFKAIKHHOG; // 0x38
	::System::Byte _padding1[0x4];
	::MGHNAPKHBOG GKJPGEJLIJE; // 0x40

	::System::Void _ctor(::MGHNAPKHBOG EOONAEHNGLF)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + CFFAFIKEAAE__CTOR_OFFSET))(this, EOONAEHNGLF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFAFIKEAAE__CCTOR_OFFSET))();
	}
};
