#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNLJPBBJIKB.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define DEJDAODMJDJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A3A730)
#define DEJDAODMJDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7E96D0)

inline static constexpr unsigned int DEJDAODMJDJ_TypeDefinitionIndex = 75621;

struct alignas(8) DEJDAODMJDJ
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DEJDAODMJDJ_TypeDefinitionIndex)->GetStaticField(0x37250);
	}
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DEJDAODMJDJ_TypeDefinitionIndex)->GetStaticField(0xC650);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x18
	::System::UInt32 JPFKAIKHHOG; // 0x1C
	::FNLJPBBJIKB KJGBAHFOGDM; // 0x20
	::System::Byte _padding0[0x4];
	::MoleMole::EntityHandle FIFNIMNMIIN; // 0x28

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC, ::FNLJPBBJIKB OBNIAHNMHPF, ::MoleMole::Battle::Entity* DIBAKMIHJCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::FNLJPBBJIKB, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DEJDAODMJDJ__CTOR_OFFSET))(this, AELLPLBJELA, DKOFFFNEFJC, OBNIAHNMHPF, DIBAKMIHJCN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEJDAODMJDJ__CCTOR_OFFSET))();
	}
};
