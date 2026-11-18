#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define KPHGDDDLEHC__CCTOR_OFFSET UNITYSDK_OFFSET(0x126B77A0)
#define KPHGDDDLEHC__CTOR_OFFSET UNITYSDK_OFFSET(0x6E1C20)

inline static constexpr unsigned int KPHGDDDLEHC_TypeDefinitionIndex = 79150;

struct alignas(8) KPHGDDDLEHC
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KPHGDDDLEHC_TypeDefinitionIndex)->GetStaticField(0x3B900);
	}
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(KPHGDDDLEHC_TypeDefinitionIndex)->GetStaticField(0xDAC0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x18
	::System::UInt32 JPFKAIKHHOG; // 0x1C
	::System::Int32 BNKHCNKJKFO; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* EBLKBABPBEB; // 0x28
	::MoleMole::Config::ConfigPosRot* JCLJIOFBHPL; // 0x30

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KPHGDDDLEHC__CTOR_OFFSET))(this, AELLPLBJELA, DKOFFFNEFJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPHGDDDLEHC__CCTOR_OFFSET))();
	}
};
