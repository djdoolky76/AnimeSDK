#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNCGEHFDLK.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/NMJNJGAOAAA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HKJAAPAADAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F420C0)

inline static constexpr unsigned int HKJAAPAADAH_TypeDefinitionIndex = 74846;

struct alignas(8) HKJAAPAADAH
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HKJAAPAADAH_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::IFNCGEHFDLK JPANLGGAABC; // 0x18
	::System::Int32 GDMOJHEEIBM; // 0x1C
	::NMJNJGAOAAA JMMHOAMDIHE; // 0x20
	::System::Int32 FEAJEMFKLCD; // 0x24
	::MoleMole::Config::AidAttackType DBNFFACAKGA; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJAAPAADAH__CCTOR_OFFSET))();
	}
};
