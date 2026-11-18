#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DKNHGBNAPDP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1344D100)
#define DKNHGBNAPDP__CTOR_OFFSET UNITYSDK_OFFSET(0x705D90)

inline static constexpr unsigned int DKNHGBNAPDP_TypeDefinitionIndex = 89589;

struct alignas(8) DKNHGBNAPDP
{
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DKNHGBNAPDP_TypeDefinitionIndex)->GetStaticField(0xC850);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single DBFPIOOPEBJ; // 0x18
	::System::Int32 HLBKHEFJAPH; // 0x1C
	::System::UInt32 JPFKAIKHHOG; // 0x20

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::Single PJNCFEHPOKP, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DKNHGBNAPDP__CTOR_OFFSET))(this, AELLPLBJELA, PJNCFEHPOKP, DKOFFFNEFJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKNHGBNAPDP__CCTOR_OFFSET))();
	}
};
